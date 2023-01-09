//
// Created by Kuba on 04.06.2022.
//
#include "zrodlo.h"
#ifndef PJC_LOKALNIE_H

/// Klasa Lokalnie dziedzicząca ze źródła
///
/// Klasa Lokalnie posiada ścieżkę, motyw(y),obraz(y) oraz informacje o ilości obrazów oraz motywów oraz nazwe wybranego motywu
class Lokalnie
        : public Zrodlo {
private:
    sciezka s;
    motyw *m;
    obraz *o;
    int ilosc_motywow;
    int ilosc_zdjec;
    std::string wybrany_motyw;
public:
    /// Konstruktor
    /// \param path to sciezka pobrana z pliku
    /// \param w to wybrany przez uzytkownika motyw
    Lokalnie(std::string path, std::string w);
/// funkcja licząca motywy
/// @return ilość motywów w ścieżce
    int policzmotywy();
// funkjca wybierająca motyw
// @param liczba zawiera liczbę motywów do ich wyświetlania
// @return  nazwe wybranego motywu
//    std::string wybormotywu(int liczba);
/// funkcja licząca obrazy w motywie
/// \param mm nazwa wybranego motywu
/// \return ilość obrazków w motywach
    int policzobrazki(std::string mm);
    ///funkcja przekazująca ilość motywów w scieżce
    int przekaziloscmotywow();
///funkcja przekazująca ilość zdjęć w motywie
    int przekazilosczdj();
///funkcja przekazująca nazwe wybranego motywu
    std::string przekazwybranymotyw();
///funkcja przekazująca ilość zdjęć w motywie
    std::string pobierzobraz(std::string motyw, int numer_foto);
    /// Funkcja zmieniająca scieżkę, w sumie to nie wiem po co ją napisałem
    void zmiensciezke();
///custom dekonstruktor
    ~Lokalnie();

};

#define PJC_LOKALNIE_H

#endif //PJC_LOKALNIE_H
