//
// Created by Kuba on 28.05.2022.
//
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <ctime>
/// Klasa wyswietlokno mająca jedno, cholernie ważne zadanie - wyświetlić okno
#ifndef PJC_WYSWIETL_OKNO_H
class wyswietlokno {
public:
    /// Konstruktor bez parametru
    wyswietlokno();//konstruktor

    /// Funkcja wyświetlająca okno
    /// @params sciezka to ścieżka do obrazu @params czas_do do czas do wydarzenia
    void wlacz_wygaszacz(std::string sciezka, std::string czas_do); // wyswietla okno

    //~wyswietlokno();
};
#define PJC_WYSWIETL_OKNO_H

#endif //PJC_WYSWIETL_OKNO_H
