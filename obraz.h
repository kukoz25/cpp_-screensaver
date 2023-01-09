//
// Created by Kuba on 28.05.2022.
//
#include <iostream>

#ifndef PJC_OBRAZ_H
#define PJC_OBRAZ_H

/// Klasa obraz zawierająca nazwe obrazu oraz przekazywanie tej nazwy
///
/// Klasa motyw zawiera stringa @nazwa, który przechowuje nazwe motywu
class obraz {
private:
    std::string nazwa; // nazwa obrazu np. "chuj.png"
public:
/// Konstruktor z parametrem
/// @param n jest nazwą motywu
    obraz(std::string n); //tworzymy obraz od razu z nazwa
    /// Konstruktor bez parametru
    obraz();

    /// Funkcja zwracająca nazwe motywu
///@returns nazwa motywu
    std::string przekaznazwe(); //zwracamy nazwe obrazu
    //~obraz();
};

#endif //PJC_OBRAZ_H
