// Написать программу, которая выводит таблицу значений функции y=-2 * x^2 - 5 * x - 8 в диапазоне от –4 до +4, с шагом 0,5
#include <iostream>
#include <string>

int main()
{
    float x=-3;
    float y;
    while (x<3.5){
        y = -3*x*x-4*x-6.5;
        std::cout << "x = " << x << ", y = " << y << std::endl;
        x += 0.5;
        }
}
