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