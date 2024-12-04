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

	float y, x, h;
	x = 2;//Початковий х з умови задачі
	h = 0.2;//Крок збільшення х за 1 ітерацію циклу з умови задачі

	do {//Цикл do while, потрібний за умовою
		y = pow(sin(x), 2) + 2 * cos(x) + 3;//Функція
		printf("Функція у = %f\n", y);//Вивід значення функції
		x += h;//Лічильник

	} while (x < 4 + h);//Умова циклу do while
}
//Новий коментар, для перевірки роботи системи контролю версій