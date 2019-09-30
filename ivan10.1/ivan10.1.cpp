// ivan10.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float s, x, g;
	cout << "введите цену за 1 кг конфет ;)" << endl;
	cin >> s;
	x = 0.1;
	while (x < 1.1)
	{
		g = x * s;
		cout << x << " кг конфет стоит " << g << " рублей" << endl;
		x = x + 0.1;
	}
	return 0;
}
