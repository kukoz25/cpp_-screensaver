//
// Created by Kuba on 28.05.2022.
//
#include <iostream>
#ifndef PJC_SCIEZKA_H
/// Klasa sciezka zawierająca sciezke do motywów oraz zwracająca ją
///
/// Klasa motyw zawiera stringa @path, który przechowuje sciezke do motywów
class sciezka {
private:
    std::string path;
public:
    /// Konstruktor bez parametru
    sciezka(); //konstruktor kurde ten
/// Konstruktor z parametrem
/// @param p jest sciezką
    sciezka(std::string p);   //konstruktor kurde ten

    /// Funkcja zmieniająca scieżkę, w sumie to nie wiem po co ją napisałem
    void zmiensciezke(); // zmienia scieche

    /// Funkcja zwracająca ścieżkę
///@returns path
    std::string przekazsciezke();
    //~sciezka();

};
#define PJC_SCIEZKA_H

#endif //PJC_SCIEZKA_H
