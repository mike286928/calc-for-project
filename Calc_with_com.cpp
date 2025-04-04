#include <iostream>

int main() {
	setlocale(LC_ALL, "RU"); //Это необходимо прописать для корректного вывода кириллицы в консоль
	int a, b; //Объявляем две целочисленные переменные, отвечающие за первое и второе число соответсвенно
	char c; //Объявляем переменную c типа char для ввода символа '+', '-', '*' или '/'
	std::cout << "Введите первое число: ";
	while (!(std::cin >> a)) {  // Проверка на корректный ввод первого числа
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка! Введите число: ";
	}
	std::cout << "Введите второе число: ";
	while (!(std::cin >> b)) {  // Проверка на корректный ввод второго числа
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка! Введите число: ";
	}
	std::cout << "Введите операцию между двумя числами: ";
	while (true) { //Бесконечный цикл для ввода символа, который завершится после корректного ввода
		std::cin >> c; //Ввод символа, отвечающего за операцию между числами
		if (c != '+' && c != '-' && c != '*' && c != '/') { //Проверка на корректность ввода
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Неправильная операция! Повторите попытку.\n"; //Если пользователь ввел не '+', '-', '*' или '/', то выводим текст
		}
		else break; //Если ввод правильный, то выходим из цикла
	}
	switch (c) { //Это множественный условный оператор
		case '+': {
			std::cout << "Сумма чисел a и b = " << a + b; //Если символ - '+', выводим сумму чисел
			break;
		}
		case '-': {
			std::cout << "Разность чисел a и b = " << a - b; //Если символ - '-', выводим разность чисел
			break;
		}
		case '*': {
			std::cout << "Произведение чисел a и b = " << a * b; //Если символ - '*', выводим произведение чисел
			break;
		}
		case '/': {
			if (b != 0) { //Если b не равно 0
				std::cout << "Частное чисел a и b = " << a / b; //Если символ - '/', выводим частное чисел
				break;
			}
			else { //Если b равно 0, то выводим сообщение об ошибке
				std::cout << "Ошибка! На ноль делить нельзя!";
				break;
			}
		}
	}
	return 0;
}
