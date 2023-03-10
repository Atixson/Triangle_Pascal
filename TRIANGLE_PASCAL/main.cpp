#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите значение:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int value = 1;
		for (int j = 0; j <= n - 1 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << " " << value;
			value = value * (i - j) / (j + 1);
		}
		cout << endl;
	}
	cout << endl;
}