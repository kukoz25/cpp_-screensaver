//
// Created by Kuba on 30.05.2022.
//

#include "okno.h"




okno::okno() {
    std::fstream plik;
    plik.open("D:\\studia\\6 semestr\\pjc\\u\\config.txt");
    if (plik.good()) {
        std::string data;
        std::string tmp;
        plik >> data;
        //std::cout << data << std::endl;
        if (data == "Lokalnie") {
            plik >> data;
            tmp = data;
            plik >> data;
            //std::cout << data << std::endl;
            // std::cout << tmp << std::endl;
            l = new Lokalnie(tmp, data);
        }
        plik >> data;
        tmp=data;
        plik >> data;
        w = new wydarzenie(tmp, data);
        plik >> data;
        tmp=data;
        plik >> data;
        p = new parametry(stoi(tmp), stoi(data));
    }
    plik.close();
}


void okno::odpal() {
    bool xd = 1;// dać mouse event i w ogóle
    int ilosc_zdj = l->przekazilosczdj();
    int kiedy = p->przekazkiedy();
    int coile = p->przekazco();
    int ktore_foto = 0;
    int c = 0;
    bool y;
    while (xd) {
        cv::startWindowThread();
        LASTINPUTINFO last_input;
        last_input.cbSize = sizeof(last_input);
        GetLastInputInfo(&last_input);

        // std::cout << GetTickCount()-last_input.dwTime << std::endl;
        if (GetTickCount() - last_input.dwTime > kiedy * 60 * 100) {
            y = 1;
            if (ktore_foto == ilosc_zdj) {
                ktore_foto = 0;
            }

            wyswietl_okno.wlacz_wygaszacz(l->pobierzobraz(l->przekazwybranymotyw(), ktore_foto),
                                          w->policz_sekundy_do_wydarzenia(w->przekazdate(),
                                                                          w->przekazczas()));
            c += 1000;

            if ((c % (coile * 60 * 100)) == 0) {
                ktore_foto++;
                c = 0;
                // std::cout << "chuj" << std::endl;
            }

        }
        if (y == 1 && GetTickCount() - last_input.dwTime < 300) {
            cv::destroyAllWindows();
            y = 0;
            //std::cout << "chuj" << std::endl;
        }

        if (GetAsyncKeyState(VK_ESCAPE)) {
            xd = 0;
        }


    }

}


okno::~okno() {
    delete[] l;
    delete[] w;
    delete[] p;
}
