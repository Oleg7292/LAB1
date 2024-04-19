#include <iostream>
#include <cmath>
using namespace std;

void Perimetr(float a, float b, float c) {
	float P;
	P = a + b + c; // Периметр
	cout << "Периметр = " << P << endl;
}

void Ploshad(float a, float b, float c) {
	float p;
	float S;
	p = (a + b + c) / 2;
	S = sqrt(p*(p-a)*(p-b)*(p-c)); // Площадь по формуле Герона
	cout << "Площадь = " << S << endl;
}

void Proverka(float a, float b, float c) {
	cout << "Треугольник - ";
	if (a == b || a == c || b == c) {// Проверка на равнобедренность
		cout << "равнобедренный" << endl;
	}
	else {
		cout << "не равнобедренный" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Введите 3 числа" << endl;
	cin >> a >> b >> c;
	if ((a+b>c)&&(b+c>a)&&(a+c>b)){
	Perimetr(a, b, c);
	Ploshad(a, b, c);
	Proverka(a, b, c);}
	else{
		cout << "неправильный треугольник";
	}
	return 0;
}