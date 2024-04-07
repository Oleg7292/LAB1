#include <iostream>
#include <cmath>
using namespace std;
// Функция для вычисления периметра прямоугольника
int Perimetr(int a, int b) {
    return 2 * (a + b);
}

// Функция для вычисления площади прямоугольника
int Ploshad(float a, float b) {
    return a * b;
}

// Функция для вычисления длины диагонали прямоугольника
int Diagonal(float a, float b) {
    return sqrt(a * a + b * b);
}

int main() {
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите ширину прямоугольника: ";
    cin >> a;
    cout << "Введите высоту прямоугольника: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "Неверные стороны" << endl;
        }
    else {
        cout << "Периметр прямоугольника: " << Perimetr(a, b) << endl;
        cout << "Площадь прямоугольника: " << Ploshad(a, b) << endl;
        cout << "Длина диагонали прямоугольника: " << Diagonal(a, b) << endl;
    }

    return 0;
}