#include <iostream>  

#include <cmath>

using namespace std;

// Функция для вычисления периметра трапеции

float perimeter(float main1, float main2, float side1, float side2) {

return (main1 + main2 + side1 + side2);

}

// Функция для вычисления площади трапеции

float square(float main1, float main2, float height) {

return ((0,5 * (main1 + main2)) * height);

}

// Функция для вычисления средней линии трапеции.

float middle(float main1, float main2) {

return (0.5 * (main1, main2));

}

int main() {

setlocale(LC_ALL, "Russian");

float main1, main2, side1, side2, height;

cout << "Длина первого основания: ";

cin >> main1;

cout << "Длина второго основания: ";

cin >> main2;

cout << "Длина боковой стороны: ";

cin >> side1;

cout << "Длина боковой стороны: ";

cin >> side2;

cout << "Длина высоты: ";

cin >> height;

if (main1 <= 0 || main2 <= 0 || side1 <= 0 || side2 <= 0 || height <= 0) {

cout << "Неверные стороны" << endl;

}

else {

cout << "Периметр: " << perimeter(main1, main2, side1, side2) << endl;

cout << "Площадь: " << square(main1, main2, height) << endl;

cout << "Длина средней линии: " << middle(main1, main2) << endl;

}

return 0;

}