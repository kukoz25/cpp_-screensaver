//
// Created by Kuba on 28.05.2022.
//
#include "wydarzenie.h"
    wydarzenie::wydarzenie() {
        data = "17.05.2022";
        czas = "10:56";
    }

    wydarzenie::wydarzenie(std::string d, std::string cz) {
        data = d;
        czas = cz;
    }

    std::string wydarzenie::policz_sekundy_do_wydarzenia(std::string data, std::string czas) {
        std::time_t t = std::time(0);   // get time now
        std::tm *now = std::localtime(&t);
        uint64_t Y1 = now->tm_year + 1900;
        uint64_t M1 = now->tm_mon + 1;
        uint64_t D1 = now->tm_mday;
        uint64_t H1 = now->tm_hour;
        uint64_t m1 = now->tm_min;
        uint64_t S1 = now->tm_sec;

        uint64_t D2 = std::stoi(data.substr(0, 2));
        uint64_t M2 = std::stoi(data.substr(3, 2));
        uint64_t Y2 = std::stoi(data.substr(6, 4));
        uint64_t H2 = std::stoi(czas.substr(0, 2));
        uint64_t m2 = std::stoi(czas.substr(3, 2));
        uint64_t S2 = 0;
        //std::cout << D2 << '.' << M2 << "." << Y2 << std::endl << H2 << ':' << m2 << std::endl;


        bool invert = false;
        if (Y1 > Y2) {
            invert = true;
        } else if (Y1 == Y2) {
            if (M1 > M2) {
                invert = true;
            } else if (M1 == M2) {
                if (D1 > D2) {
                    invert = true;
                } else if (D1 == D2) {
                    if (H1 > H2) {
                        invert = true;
                    } else if (H1 == H2) {
                        if (m1 > m2) {
                            invert = true;
                        } else if (m1 == m2 && S1 > S2) {
                            invert = true;
                        }
                    }
                }
            }
        }

        if (invert) {
            std::swap(Y1, Y2);
            std::swap(M1, M2);
            std::swap(D1, D2);
            std::swap(H1, H2);
            std::swap(m1, m2);
            std::swap(S1, S2);
        }

        static const int month_days_sum[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
        const uint64_t Y1_days = month_days_sum[M1 - 1];
        const uint64_t Y2_days = month_days_sum[M2 - 1];
        int years_days = (Y2 - Y1) * 365;

        // Leap Years
        for (uint64_t i = Y1 + 1; i < Y2;) {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                ++years_days;
                i += 4;
            } else {
                ++i;
            }
        }

        const bool lY1 = (Y1 % 4 == 0 && Y1 % 100 != 0) || Y1 % 400 == 0 && (M1 < 2 || (M1 == 2 && D1 < 29));
        const bool lY2 = (Y2 % 4 == 0 && Y2 % 100 != 0) || Y2 % 400 == 0 && (M2 > 2 || (M2 == 2 && D2 > 28));

        if (Y1 == Y2) {
            if (lY1 && lY2) ++years_days;
        } else {
            if (lY1) ++years_days;
            if (lY2) ++years_days;
        }

        // Convert years to seconds
        const long years_seconds = years_days * 86400;

        // Time difference in seconds
        const long S1s = ((Y1_days + D1) * 86400) + (H1 * 3600) + (m1 * 60) + S1;
        const long S2s = ((Y2_days + D2) * 86400) + (H2 * 3600) + (m2 * 60) + S2;

        long total = years_seconds + (S2s - S1s);
        //std::cout << invert << std::endl;
        std::string czas_do_wydarzenia;
        if (invert) {
            total = -total;
        }


        int dni, godziny, minuty, sekundy;
        dni = total / 86400;
        godziny = (total % 86400) / 3600;
        minuty = ((total % 86400) % 3600) / 60;
        sekundy = ((total % 86400) % 3600) % 60;
        czas_do_wydarzenia =
                std::to_string(dni) + ':' + std::to_string(godziny) + ':' + std::to_string(minuty) + ':' +
                std::to_string(sekundy);
        if (total <= 0) {
            czas_do_wydarzenia = "Odbylo sie!";
        }
        return czas_do_wydarzenia;
    }

    std::string wydarzenie::przekazdate() {
        return data;
    }

    std::string wydarzenie::przekazczas() {
        return czas;
    }
    //~wydarzenie();