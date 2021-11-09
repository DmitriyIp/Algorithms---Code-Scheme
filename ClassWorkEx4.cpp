#include <iostream>

using namespace std;

int main()
{
	int a, i;
	int sum = 0;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число, до которого будет происходить суммирование: ";
	cin >> a;
	if (a <= 0) {
		cout << "Введено не натуральное число!";
	}
	else {
		for (i = 1; i <= a; i++) {
			sum += i;
		}
		cout << sum;
		return 0;
	}
}

