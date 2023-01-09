//
// Created by Kuba on 28.05.2022.
//

#include "sciezka.h"

    sciezka::sciezka() {  //konstruktor kurde ten
        std::string p;
        //std::cout << "Podaj sciezke" << std::endl;
        //std::cin >> p;
        //if (p != "")
            path = p;
        //else
           // std::cout << "Error" << std::endl;
    }

    sciezka::sciezka(std::string p) {  //konstruktor kurde ten
        if (p != "")
            path = p;
        else
            std::cout << "Error" << std::endl;
    }

    void sciezka::zmiensciezke() // zmienia scieche
    {
        std::string g;
        std::cout << "Podaj sciezke" << std::endl;
        std::cin >> g;
        if (g != "")
            path = g;
        else
            std::cout << "Error" << std::endl;
    }

    std::string sciezka::przekazsciezke() {
        return path;
    }

    //~sciezka();

