﻿// Задача 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
// Напишите программу, которая запрашивает два целых числа 
//x и y, после чего вычисляет и выводит значение x в степени y
// 
//

#include <iostream>
using namespace std;

int main()
{
    int x, y, Pr = 1;
    cout << "Введите значения для х : ";
    cin >> x;
    cout << "Введите значения для y : ";
    cin >> y;
    for ( int i = 0; i < y; i++)
    {
        Pr = Pr * x;
    }
    cout << "Результат: " << Pr;
    return 0;
}
