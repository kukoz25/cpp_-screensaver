//
// Created by Kuba on 29.05.2022.
//

#include "parametry.h"



    parametry::parametry(int c, int k) {
        kiedy_sie_odpala = k;
        co_ile_zmiana = c;
    }

parametry::parametry() {
        int c;
        int k;
        kiedy_sie_odpala = k;
        co_ile_zmiana = c;
    }

int parametry::przekazkiedy() {
        return kiedy_sie_odpala;
    }

int parametry::przekazco() {
        return co_ile_zmiana;
    }