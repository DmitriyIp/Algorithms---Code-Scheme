#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;

	cout << "Введите три любых числа: " << endl;
	cin >> a >> b >> c;
	cout << "Выполняется сравнение" << endl;
	if (a > b and a > c) {
		cout << "Наибольшее число: " << a;
	}
	if (b > a and b > c) {
		cout << "Наибольшее число: " << b;
	}
	if (c > a and c > b) {
		cout << "Наибольшее число: " << c;
	}
	if (a == b and a == c) {
		cout << "Числа равны, наибольшего нет";
	}



}