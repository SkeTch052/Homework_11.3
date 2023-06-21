#include <iostream>
#include <Windows.h>
#include <locale.h>
#include "..\DynLibLeaver\Leaver.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Leaver_ns::Leaver L;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << L.leaver(name) << std::endl;
    return 0;
}