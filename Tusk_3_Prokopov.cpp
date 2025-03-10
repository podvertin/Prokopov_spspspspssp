#include <iostream>

template <typename T>
T max(T t1, T t2) {
	if (t1 > t2) {
		std::cout << t1;
		return t1;
	}
	if (t1 < t2) {
		std::cout << t2;
		return t2;
	}
}
template <typename T>
T arr_mean(T t1, T t2) {
	std::cout << (t1 + t1) / 2;
	return (t1 + t1) / 2;
}
template <typename T>
T sum_module(T t1, T t2) {
	int sum = t1 + t2;
	if (sum < 0) {
		std::cout << sum * (-1);
		return sum * (-1);
	}
	else {
		std::cout << sum;
		return sum;
	}
}

int main() {
	system("chcp 1251");
	int choice_type = 1, menu_choice = 1;
	std::cout << "Введите тип переменных\n1.int\n2.float\n3.double\n>"; std::cin >> choice_type;
	switch (choice_type) {
	case 1:
	{
		system("pause"); system("cls");
		int num1 = 0, num2 = 0;
		std::cout << "Введите 2 числа: "; std::cin >> num1, num2;
		while (menu_choice != 0) {
			std::cout << "1.Максимальное\n2.Среднее арифметическое\n3.Модуль суммы\n4.Целая часть суммы чисел\n>"; std::cin >> menu_choice;
			switch (menu_choice) {
			case 1:
			{
				max(num1, num2);
				break;
			}
			case 2:
			{
				arr_mean(num1, num2);
				break;
			}
			case 3:
			{
				sum_module(num1, num2);
				break;
			}
			case 4:
			{
				std::cout << num1 + num2;
				break;
			}
			}

		}
	}
	case 2:
	{
		system("pause"); system("cls");
		float num1 = 0, num2 = 0;
		std::cout << "Введите 2 числа: "; std::cin >> num1, num2;
		while (menu_choice != 0) {
			std::cout << "1.Максимальное\n2.Среднее арифметическое\n3.Модуль суммы\n4.Целая часть суммы чисел\n>"; std::cin >> menu_choice;
			switch (menu_choice) {
			case 1:
			{
				system("pause"); system("cls");
				max(num1, num2);
				break;
			}
			case 2:
			{
				system("pause"); system("cls");
				arr_mean(num1, num2);
				break;
			}
			case 3:
			{
				system("pause"); system("cls");
				sum_module(num1, num2);
				break;
			}
			case 4:
			{
				system("pause"); system("cls");
				int sum = num1 + num2;
				std::cout << (int)sum;
			}
			}

		}
	}
	case 3:
	{
		system("pause"); system("cls");
		double num1 = 0, num2 = 0;
		std::cout << "Введите 2 числа: "; std::cin >> num1, num2;
		while (menu_choice != 0) {
			std::cout << "1.Максимальное\n2.Среднее арифметическое\n3.Модуль суммы\n4.Целая часть суммы чисел\n>"; std::cin >> menu_choice;
			switch (menu_choice) {
			case 1:
			{
				system("pause"); system("cls");
				max(num1, num2);
				break;
			}
			case 2:
			{
				system("pause"); system("cls");
				arr_mean(num1, num2);
				break;
			}
			case 3:
			{
				system("pause"); system("cls");
				sum_module(num1, num2);
				break;
			}
			case 4:
			{
				int sum = num1 + num2;
				std::cout << (int)sum;
			}
			}
		}
	}
	}


	return 0;
}