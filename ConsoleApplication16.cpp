// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdafx.h"
#include <string>

class flat
{
private:
    double price;
    double area;
public:
    flat() : price(0), area(0) { };
    flat(const double& prc, const double& area) : price(prc), area(area) { };
    flat(const flat& date) : price(date.price), area(date.area) { };
    ~flat() { };
    flat& operator = (const flat& date);

    friend bool operator == (const flat& lhs, const flat& rhs);
    friend bool operator != (const flat& lhs, const flat& rhs);

    friend bool operator > (const flat& lhs, const flat& rhs);
    friend bool operator < (const flat& lhs, const flat& rhs);
};

flat& flat::operator = (const flat& date)
{
    if (this == &date)
    {
        return *this;
    }

    price = date.price;
    area = date.area;
    return *this;
}

bool operator == (const flat& lhs, const flat& rhs)
{
    return lhs.area == rhs.area;
}

bool operator != (const flat& lhs, const flat& rhs)
{
    return !(lhs.area == rhs.area);
}

bool operator > (const flat& lhs, const flat& rhs)
{
    return lhs.price > rhs.price;
}

bool operator < (const flat& lhs, const flat& rhs)
{
    return lhs.price < rhs.price;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
