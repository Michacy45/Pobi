cmake_minimum_required(VERSION 3.4)

project(Program)

#ustaw we w³asnej zmiennej SOURCE_FILES zbiór plików Ÿród³owych projektu
set(SOURCE_FILES
        src/main.cpp
        )
#w³¹cz powy¿szy zbiór plików do zbudowania programu wykonywalnego Program
add_executable(Program ${SOURCE_FILES})

target_link_libraries(Program Biblioteka)

#do³¹cz katalog include podprojektu Program do globalnej listy. Dziêki temu ka¿dy inny podprojekt bêdzie ten katalog "widzia³"
target_include_directories(Program PUBLIC include)