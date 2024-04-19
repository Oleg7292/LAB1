#include <iostream>
#include <cmath>
using namespace std;
// Функция для вычисления периметра прямоугольника
float Perimetr(float a, float b) {
    return 2 * (a + b);
}

// Функция для вычисления площади прямоугольника
float Ploshad(float a, float b) {
    return a * b;
}

// Функция для вычисления длины диагонали прямоугольник
float Diagonal(float a, float b) {
    return sqrt(a * a + b * b);
}

int main() {
    float a, b;
    cout << "Write width: ";
    cin >> a;
    cout << "Write height: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "Wrong sides" << endl;
        }
    else {
        cout << "Perimetr: " << Perimetr(a, b) << endl;
        cout << "Ploshad: " << Ploshad(a, b) << endl;
        cout << "Diagonal: " << Diagonal(a, b) << endl;
    }

    return 0;
}