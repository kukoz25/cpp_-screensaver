//
// Created by Kuba on 28.05.2022.
//
#include "wyswietl_okno.h"

wyswietlokno::wyswietlokno() {

}

void wyswietlokno::wlacz_wygaszacz(std::string sciezka, std::string czas_do) {
    int x = rand() % 1000 + 400;
    int y = rand() % 900 + 150;
    std::time_t t = std::time(0);   // get time now
    std::tm *now = std::localtime(&t);
    int Y1 = now->tm_year + 1900;
    int M1 = now->tm_mon + 1;
    int D1 = now->tm_mday;
    int H1 = now->tm_hour;
    int m1 = now->tm_min;
    int S1 = now->tm_sec;
    std::string godzina, data;
    std::string H_1, m_1, S_1, D_1, M_1;
    if (H1 < 10) {
        H_1 = '0' + std::to_string(H1);
    } else H_1 = std::to_string(H1);

    if (m1 < 10) {
        m_1 = '0' + std::to_string(m1);
    } else m_1 = std::to_string(m1);

    if (S1 < 10) {
        S_1 = '0' + std::to_string(S1);
    } else S_1 = std::to_string(S1);

    godzina = H_1 + ':' + m_1 + ':' + S_1;

    if (D1 < 10) {
        D_1 = '0' + std::to_string(D1);
    } else D_1 = std::to_string(D1);

    if (M1 < 10) {
        M_1 = '0' + std::to_string(M1);
    } else M_1 = std::to_string(M1);


    data = D_1 + '.' + M_1 + '.' + std::to_string(Y1);
    cv::Mat img = cv::imread(sciezka);
    cv::putText(img, "Do wydarzenia pozostalo :", cv::Point((x - 350), y - 55), cv::FONT_HERSHEY_DUPLEX, 2,
                cv::Scalar(rand() % 256, rand() % 256, rand() % 256), 2, false);
    cv::putText(img, czas_do, cv::Point(x, y), cv::FONT_HERSHEY_DUPLEX, 2,
                cv::Scalar(rand() % 256, rand() % 256, rand() % 256), 2, false);
    cv::putText(img, godzina, cv::Point(0, 1050), cv::FONT_HERSHEY_DUPLEX, 1,
                cv::Scalar(rand() % 256, rand() % 256, rand() % 256), 2, false);
    cv::putText(img, data, cv::Point(1720, 40), cv::FONT_HERSHEY_DUPLEX, 1,
                cv::Scalar(rand() % 256, rand() % 256, rand() % 256), 2, false);
    cv::namedWindow("Name", cv::WINDOW_NORMAL);
    cv::setWindowProperty("Name", cv::WND_PROP_TOPMOST, 1);
    cv::setWindowProperty("Name", cv::WND_PROP_FULLSCREEN, cv::WINDOW_FULLSCREEN);
    cv::imshow("Name", img);
    cv::waitKey(1000);
    //cv::destroyAllWindows;
    //cv::destroyWindow("Name");




}