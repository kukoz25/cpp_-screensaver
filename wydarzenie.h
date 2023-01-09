//
// Created by Kuba on 28.05.2022.
//
#include <iostream>
#include <ctime>
#ifndef PJC_WYDARZENIE_H
/// Klasa wydarzenie zawierająca czas i date wydarzenia oraz obliczająca czas do wydarzenia bazując na zegarze komputera
///
/// Klasa motyw zawiera stringa @data oraz @czas
class wydarzenie { //oblicza czas do wydarzenia i go zwraca
private:
    std::string data;
    std::string czas;
public:
    /// Konstruktor bez parametru
    wydarzenie(); //kostruktor
/// Konstruktor z parametrem
/// @param d jest datą, @param cz jest czasem
    wydarzenie(std::string d, std::string cz); //konstruktor 2

    /// Funkcja licząca czas do wydarzenia oraz zwracająca go w postaci stringa
///@param data to data wydarzenia, @param czas to czas wydarzenia
///@returns policz_sekundy_do_wydarzenia
    std::string policz_sekundy_do_wydarzenia(std::string data, std::string czas); // liczy czas do wydarzenia

    /// Funkcja zwracająca date
///@returns data
    std::string przekazdate(); // przekazuje date
    /// Funkcja zwracająca czas
///@returns czas
    std::string przekazczas(); //przekazuje czas
    //~wydarzenie();
};
#define PJC_WYDARZENIE_H

#endif //PJC_WYDARZENIE_H
