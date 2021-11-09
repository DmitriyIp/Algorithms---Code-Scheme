#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	float a, b, c;

	cout << "Введите число, которое будете делить: ";
	cin >> a;
	cout << "Введите число, на которое будете делить: ";
	cin >> b;
	if (b == 0) {
		cout << "На ноль делить нельзя";
	}
	else {
		c = a / b;
		cout << c;
	}
}
