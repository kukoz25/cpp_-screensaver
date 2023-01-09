
#include <iostream>

#ifndef PJC_MOTYW_H

/// Klasa motyw zawierająca nazwe motywu oraz przekazywanie tej nazwy
///
/// Klasa motyw zawiera stringa @nazwa_motywu, który przechowuje nazwe motywu
class motyw {
private:
    std::string nazwa_motywu; //nazwa motywu
public:
/// Konstruktor z parametrem
/// @param n jest nazwą motywu
    motyw(std::string n);// tworzymy motyw z nazwa
/// Konstruktor bez parametru
    motyw(); // tworzymy motyw bez nazwy
/// Funkcja zwracająca nazwe motywu
///@returns nazwa motywu
    std::string przekazmotyw(); // funkcja do zwracania nazwy
    //~motyw();
};

#define PJC_MOTYW_H

#endif //PJC_MOTYW_H
