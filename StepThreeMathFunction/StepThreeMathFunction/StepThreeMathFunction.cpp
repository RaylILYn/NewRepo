#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float x, xk, dx, y;
	int j = 1;

	cout << "Начальное значение х: ";
	cin >> x;
	cout << "Конечное значение x: ";
	cin >> xk;
	cout << "Шаг x: ";
	cin >> dx;
	cout << endl;
	if (x >= xk)
	{
		cout << "Ошибка 1 - Начальное значение больше конечного" << endl;
		return;
	}
	else {
		if ((xk - x) <= dx)
		{
			cout << "Ошибка 2 - Слишком большой шаг" << endl;
			return;
		}
	}
	for (x; x <= xk; x += dx)
	{
		if (x == -10)
		{
			y = 1 / x;
			cout << "Формула 3" << endl;
		}
		else {
			if (x <= 0)
			{
				y = pow(x, 2);
				cout << "Формула 1 " << endl;
			}
			else {
				if (x > 1)
				{
					y = sqrt(x + 1);
					cout << "Формула 2" << endl;
				}
				else {
					y = 1 / x;
					cout << "Формула 3" << endl;
				}
			}
		}
		cout.precision(5);
		cout << j << "." << "	x= " << x << "	y= " << y << endl << endl;
		++j;
	}
	system("pause");
}