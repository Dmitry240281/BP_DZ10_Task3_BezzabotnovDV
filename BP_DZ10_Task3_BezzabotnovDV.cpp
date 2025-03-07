// BP_DZ10_Task3_BezzabotnovDV.cpp: определяет точку входа для приложения.
//

#include "BP_DZ10_Task3_BezzabotnovDV.h"
#include <iostream>
#include <windows.h>
#include "BP_DZ10_Task2_Lib/Leaver.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name{}, surname{};
    std::cout << "Введите своё имя: ";
    std::cin >> name;
    std::cout << "Введите своё отчество: ";
    std::cin >> surname;

    Leaver::Leaver string;

    std::cout << string.leave(name + " " + surname + "!") << std::endl;

    return EXIT_SUCCESS;
}

