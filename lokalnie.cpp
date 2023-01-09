#include "lokalnie.h"

Lokalnie::Lokalnie(std::string path, std::string w) {
    s=sciezka(path);
    if (s.przekazsciezke() != "") {

        int im = policzmotywy();
        ilosc_motywow = im;
        wybrany_motyw = w;
        int iz = policzobrazki(w);
        ilosc_zdjec = iz;
    }
}

int Lokalnie::policzmotywy() {
    int ile = 0; // potrzebna do policzenia ilosci motywow

    for (const auto &entry: std::filesystem::directory_iterator(s.przekazsciezke()))
        ile++;

    m = new motyw[ile]; // tworzenie tablicy motywów

    int i = 0; //potrzebne do wczytywania nazwy

    for (const auto &entry: std::filesystem::directory_iterator(s.przekazsciezke())) {
        m[i] = motyw(entry.path().string().substr(s.przekazsciezke().size() + 1,
                                                  entry.path().string().size() -
                                                  s.przekazsciezke().size())); //wpisywanie nazwy od motywu do motywu

        i++;
    }
    return ile;
}

//std::string Lokalnie::wybormotywu(int liczba) {
//    bool xd = true;
//    std::string mm;
//    while (xd) //pętla dla idiotów
//    {
//        std::cout << "wybierz motyw" << std::endl;
//        for (int x = 0; x < liczba; x++) {
//            std::cout << m[x].przekazmotyw() << std::endl;
//        }
//        std::cin >> mm;
//        for (int x = 0; x < liczba; x++) {
//            if (mm == m[x].przekazmotyw()) {
//                xd = 0;
//            }
//        }
//    }
//    return mm;
//}

int Lokalnie::policzobrazki(std::string mm) {
    int ile = 0; // potrzebna do policzenia ilosci obrazkow

    for (const auto &entry: std::filesystem::directory_iterator(s.przekazsciezke() + '\\' + mm))
        ile++;
//std::cout << ile << std::endl;
    o = new obraz[ile]; // tworzenie tablicy obrazow
    int i = 0; //potrzebne do wczytywania nazwy
    for (const auto &entry: std::filesystem::directory_iterator(s.przekazsciezke() + '\\' + mm)) {
        o[i] = obraz(entry.path().string().substr(s.przekazsciezke().size() + mm.size() + 2,
                                                  (entry.path().string().size() -
                                                   (s.przekazsciezke().size() + 1 +
                                                    mm.size())))); //wpisywanie nazwy od obrazow do talblicy obrazow
        //std::cout << o[i].przekaznazwe() << std::endl;
//std::cout << i << std::endl;
        i++;
    }
    return ile;
}

int Lokalnie::przekaziloscmotywow() {
    return ilosc_motywow;
}

int Lokalnie::przekazilosczdj() {
    return ilosc_zdjec;
}

std::string Lokalnie::przekazwybranymotyw() {
    return wybrany_motyw;
}

std::string Lokalnie::pobierzobraz(std::string motyw, int numer_foto) { //znowu poprawic XDDXDXD
    std::string pall;
    pall = s.przekazsciezke() + '\\' + motyw + '\\' + o[numer_foto].przekaznazwe();
    //std::cout << pall << std::endl;
    return pall;
}
//    std::string pobierzobraz(){
//        std::string xd="xd";
//        return xd;
//    }


void Lokalnie::zmiensciezke() {
    std::string g;
    std::cout << "podaj nowa sciezke" << std::endl;
    std::cin >> g;
    s = sciezka(g);
    std::cout << s.przekazsciezke() << std::endl;
}

Lokalnie::~Lokalnie() {
    delete[] m;
    delete[] o;
}


