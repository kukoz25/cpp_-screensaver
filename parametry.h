//
// Created by Kuba on 29.05.2022.
//

#ifndef PJC_PARAMETRY_H
/// Klasa parametry zawierająca paramatry okna - po jakim czasie bezczynności ma się włączyć wygaszacz oraz co ile ma się zmieniać obraz
///
/// Klasa motyw zawiera int @co_ile_zmiana oraz @kiedy_sie_odpala
class parametry {
private:
    int co_ile_zmiana;
    int kiedy_sie_odpala;
public:
    /// Konstruktor z parametremami
    /// @param c i @param k odpowiadają odpowiednio co ile oraz kiedy
    parametry(int c, int k);
    /// Konstruktor bez parametru
    parametry();
    /// Funkcja zwracająca czas kiedy ma się włączyć wygaszacz
///@returns kiedy_sie_odpala
    int przekazkiedy();
    /// Funkcja zwracająca czas co ile ma zmieniac sie zdjecie
///@returns @co_ile_zmiana
    int przekazco();
    //~parametry();
};
#define PJC_PARAMETRY_H

#endif //PJC_PARAMETRY_H
