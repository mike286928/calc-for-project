#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	char c;
	std::cout << "Введите первое число: ";
	while (!(std::cin >> a)) { 
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка! Введите число: ";
	}
	std::cout << "Введите второе число: ";
	while (!(std::cin >> b)) {
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка! Введите число: ";
	}
	std::cout << "Введите операцию между двумя числами: ";
	while (true) {
		std::cin >> c;
		if (c != '+' && c != '-' && c != '*' && c != '/') {
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Неправильная операция! Повторите попытку.\n";
		}
		else break;
	}
	switch (c) {
		case '+': {
			std::cout << "Сумма чисел a и b = " << a + b;
			break;
		}
		case '-': {
			std::cout << "Разность чисел a и b = " << a - b;
			break;
		}
		case '*': {
			std::cout << "Произведение чисел a и b = " << a * b;
			break;
		}
		case '/': {
			if (b != 0) {
				std::cout << "Частное чисел a и b = " << a / b;
				break;
			}
			else {
				std::cout << "Ошибка! На ноль делить нельзя!";
				break;
			}
		}
	}
	return 0;
}
