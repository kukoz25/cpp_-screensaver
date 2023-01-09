
#include "motyw.h"

    motyw::motyw(std::string n) {
        if (n == "")
            std::cout << "Error";
        else
            nazwa_motywu = n;
    }
    motyw::motyw() {
        std::string n;
        //std::cout << "Podaj motyw" << std::endl;
        //std::cin >> n;
        //if (n == "")
        // std::cout << "Error";
        //else
        nazwa_motywu = n;
    };

    std::string motyw::przekazmotyw() // funkcja do zwracania nazwy
    {
        return nazwa_motywu;
    }

    //~motyw();
