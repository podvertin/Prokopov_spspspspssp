#include <iostream>
#include <vector>

class Company {
	std::string name;
	long income, expenses; // ������, �������
	int turnover = income + expenses; // ������
	int net_profit = income - expenses; //������ �������
	bool pablik_privet;
public:
	int id;
	Company() {
		name = "�������";
		income = 5252525252;
		expenses = 4242424224;
		turnover = income + expenses;
		net_profit = income - expenses;
	}

	int getIncome() const {
		if (pablik_privet) return 0;
		else if (!pablik_privet && turnover >= 5000000) return income; std::exception("������ ������");
	}
	Company& setIncome(long _income) { income += _income; return *this; }

	int getExpenses() const {
		if (pablik_privet) return 0;
		else if (!pablik_privet && turnover >= 5000000) return expenses;
	}
	Company& setExpenses(long _expenses) { expenses += _expenses; return *this; }

	int getTurnover() const {
		if (pablik_privet) return 0;
		else if (!pablik_privet && turnover >= 5000000) return turnover;
	}
	Company& setTurnover(int _turnover) { turnover = _turnover; return *this; }

	int getNet_Profit() const {
		if (pablik_privet) return 0;
		else if (!pablik_privet && turnover >= 5000000) return net_profit;
	}
	Company& setNet_Profit(int _net_profit) { net_profit = _net_profit; return *this; }

	std::string getName() const {
	return name;
	}
	Company& setName(std::string _name) { name = _name; return *this; }

	void info() {
		std::cout << "\n�������� �������� " << name << "\n����� " << income << "\n������� " << expenses <<
			"\n������ " << turnover << "\n������ ������� " << net_profit << std::endl;

		if (pablik_privet) std::cout << "��������: ��������������� " << std::endl;
		else if (!pablik_privet) std::cout << "��������: �������" << std::endl;
	}
};

int main() {
	system("chcp 1251"), system("cls");
	std::vector<Company>companies;
	int choice = 0, id_company = 0, kol_company;
	std::cout << "������� ���-�� �������� "; std::cin >> kol_company;
	for (int i = 0; i < kol_company; i++) {
		companies.push_back(Company()); 
			companies.at(i).id = id_company;
	}
	do {
		std::cout << "1 - �������� ������ ��������\n2 - �������� ������ ��������\n��� ����: ";
		std::cin >> choice;
		if (choice == 1) {
			std::cout << "1 - �������� �����\n2 - �������� �������\n3 - �������� ������\n4 - �������� ������ �������\n5 - �������� �������� ��������\n6 - �������� ��� ������\n��� �����: ";
			std::cin >> choice;
			switch (choice) {
			case 1:
				std::cout << "������� id: "; std::cin >> id_company;
				std::cout << "�����: ";
				for (int i = 0; i < companies.size(); i++) {
					if (companies.at(i).id == id_company) {
						companies.at(i).getIncome();
					}
				}
				break;
			case 2:
				std::cout << "������� id: "; std::cin >> id_company;
				std::cout << "�������: ";
				for (int i = 0; i < companies.size(); i++) {
					if (companies.at(i).id == id_company) {
						companies.at(i).getExpenses();
					}
				}
				break;
			case 3:
				std::cout << "������� id: "; std::cin >> id_company;
				std::cout << "������: ";
				for (int i = 0; i < companies.size(); i++) {
					if (companies.at(i).id == id_company) {
						companies.at(i).getTurnover();
					}
				}
				break;
			case 4:
				std::cout << "������� id: "; std::cin >> id_company;
				std::cout << "������ �������: ";
				for (int i = 0; i < companies.size(); i++) {
					if (companies.at(i).id == id_company) {
						companies.at(i).getNet_Profit();
					}
				}
				break;
			case 5:
				std::cout << "������� id: "; std::cin >> id_company;
				std::cout << "�������� ��������: ";
				for (int i = 0; i < companies.size(); i++) {
					if (companies.at(i).id == id_company) {
						companies.at(i).getName();
					}
				}
				break;
			case 6:
				std::cout << "������� id: "; std::cin >> id_company;
				std::cout << "��� ������ ��������: ";
				for (int i = 0; i < companies.size(); i++) {
						companies.at(i).info();
				}
				break;
			}


		}
		
	} while (choice <= 0 && choice >= 3);
}