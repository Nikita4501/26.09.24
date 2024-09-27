#include <iostream>
#include<windows.h>
#include<string>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, c;
    cout << "Введите длины сторон треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && a == c) {
            cout << "Треугольник равносторонний" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Треугольник равнобедренный" << endl;
        }
        else {
            string type = ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) ? "прямоугольный" : "разносторонний";
            cout << "Треугольник " << type << endl;
        }
    }
    else {
        cout << "Треугольник не существует" << endl;
    }

    return 0;
}