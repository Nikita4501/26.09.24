#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() //Задание 1
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c, d;

    cout << "Введите длины сторон фигуры: ";
    cin >> a >> b >> c >> d;

    string type = (a == b && b == c && c == d) ? "Квадрат" :
        (a == b && c == d) ? "Прямоугольник" :
        (a + b > c && a + c > b && b + c > a) ? "Треугольник" :
        "Неизвестная фигура";

    cout << "Фигура: " << type << endl;

    return 0;
}
