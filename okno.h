//
// Created by Kuba on 30.05.2022.
//
#include "wydarzenie.h"
#include "wyswietl_okno.h"
#include "parametry.h"
#include "zrodlo.h"
#include "lokalnie.h"
#include <windows.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <fstream>


#ifndef PJC_OKNO_H
/// Klasa okno zawierająca zródło, wydarzenie, parametry oraz wyświetlanie okna
///
/// Klasa okno to najważniejsza funkcja w programie, zawiera w sobie wszystkie klasy potrzebne do znalezienia oraz prawidłowego wyświetlenia obrazu
class okno {
private:
    Zrodlo *l;
    wydarzenie *w;
    parametry *p;
    wyswietlokno wyswietl_okno;
public:
    /// Konstruktor bez parametru, w którym tak naprawdę wszytsko się dzieje
    okno();
///Najważniejsza funcja, która wyświetla obraz, zamyka go, zmienia oraz inne pierdoły robi
    void odpal();

///customowy decontruktor
    ~okno();

};

#define PJC_OKNO_H

#endif //PJC_OKNO_H
