//
// Created by Kuba on 28.05.2022.
//
#include "obraz.h"
    obraz::obraz(std::string n) {
        if (n == "")
            std::cout << "Error";
        else
            nazwa = n;
    }

    obraz::obraz() {
        std::string o;
//        std::cout << "Podaj nazwe obraz" << std::endl;
//        std::cin >> o;
//        if (o == "")
//            std::cout << "Error";
//        else
        nazwa = o;
    }

    std::string obraz::przekaznazwe() // funkcja do zwracania nazwy
    {
        return nazwa;
    }

    //obraz::~obraz()

