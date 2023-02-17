#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество строк треугольника Паскаля:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int val = 1;
		for (int j = 0; j <= n - 1 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << " " << val;
			val = val * (i - j) / (j + 1);
		}
		cout << endl;
	}
	cout << endl;
}