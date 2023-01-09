//
// Created by Kuba on 29.05.2022.
//
#include "obraz.h"
#include "motyw.h"
#include "sciezka.h"
#include <iostream>
#include <filesystem>

#ifndef PJC_ZRODLO_H
/// Klasa zrodlo będąca klasą wirtualną, a bo źródeł możę być wiele
class Zrodlo { //klasa wirtualna
public:
    /// Wirtualna funkcja tworząca/pobierająca obraz
    ///
    /// @param motyw będąca wybranym motywem
    /// @param numer_foto
    /// @return zwraca ścieżkę do obrazu
    virtual std::string pobierzobraz(std::string motyw, int numer_foto) = 0;
///wirtualna funkcja licząca ilość zdjęć w motywie
    virtual int przekazilosczdj() = 0;
///wirtualna funkcja przekazująca dalej wybrany motyw
    virtual std::string przekazwybranymotyw() = 0;
///wirtualna funkcja przekazująca ilość motywów
    virtual int przekaziloscmotywow() = 0;
    //~Zrodlo();
};
#define PJC_ZRODLO_H

#endif //PJC_ZRODLO_H
