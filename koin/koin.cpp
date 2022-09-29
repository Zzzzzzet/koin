#include <iostream>
#include <stdlib.h>
#include <vector>
#include <locale.h>

using namespace std;

void check_n(vector<int>& a)
{
	vector <int> vector_b;
	int c;
	c = 0;
	for (int i = 0; i < 100; i++)
	{
		if (a[i] > 0)
		{
			vector_b.push_back(a[i]);

		}
	}
	cout << "Массив из положительных чисел" << endl;
	for (int i = 0; i < vector_b.size(); i++) {
		cout << vector_b[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < vector_b.size(); i++) {
		c = c + vector_b[i];
	}
	cout << "Сумма положительных чисел = " << c;
}

int main()
{
	vector <int> a(100);
	setlocale(LC_ALL, "Russian");
	cout << "Начальный массив " << endl;
	for (int i = 0; i < 100; i++)
	{
		a[i] = rand() % (100 - (-100)) + (-100);
		cout << a[i] << " ";
	}
	cout << "\n";
	check_n(a);
}
//   Задача
//Вот у вас мейн в мейне вы ебашите функцию
//В фнкцию передается вектор в нем случ колво от 1 до 100 слуачайных чисел от - 100 до 100, найти сумму положительных и вывести положительные
