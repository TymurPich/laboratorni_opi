#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);//ϳ������� ��������

	cout << "������ ����� �, b, c, x, ����� �����: " << endl;//���� �������� ������ 4 ����� ����� �����
	float a, b, c, x, F;
	cin >> a >> b >> c >> x;//����� 4 ������ �����

	if (x < 0.6 && b + c != 0)//����� �����
		F = a * pow(x, 3) + b * b + c;
	else {
		if (x > 0.6 && b + c == 0)//����� �����
			F = (x - a) / (x - c);
		else//����� �����
			F = x / c + x / a;
	}
	cout << setprecision(3) << "������� F = " << F << endl;//���� �����
}