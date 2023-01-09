cmake_minimum_required(VERSION 3.21)
project(u)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

add_executable(u
        mainwindow.ui
        mainwindow.cpp
        main.cpp
        drugieokno.ui
        drugieokno.h
        drugieokno.cpp
        obraz.h
        obraz.cpp
        motyw.h
        motyw.cpp
        sciezka.h
        sciezka.cpp
        wydarzenie.h
        wydarzenie.cpp
        wyswietl_okno.h
        wyswietl_okno.cpp
        parametry.h
        parametry.cpp
        zrodlo.h
        okno.h
        okno.cpp
        lokalnie.cpp
        lokalnie.h
        )
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE-DIRECTORIES})
target_link_libraries(u PRIVATE Qt6::Widgets ${OpenCV_LIBS})

set_target_properties(u PROPERTIES
        WIN32_EXECUTABLE ON
        MACOSX_BUNDLE ON
        )
