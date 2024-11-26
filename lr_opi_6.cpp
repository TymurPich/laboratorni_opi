#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);//Підтримка кирилиці

	cout << "Введіть числа а, b, c, x, через пробіл: " << endl;//Вивід прохання ввести 4 числа через пробіл
	float a, b, c, x, F;
	cin >> a >> b >> c >> x;//Запис 4 дійсних чисел

	if (x < 0.6 && b + c != 0)//Перша умова
		F = a * pow(x, 3) + b * b + c;
	else {
		if (x > 0.6 && b + c == 0)//Друга умова
			F = (x - a) / (x - c);
		else//Третя умова
			F = x / c + x / a;
	}
	cout << setprecision(3) << "Функція F = " << F << endl;//Вивід рішеня
}