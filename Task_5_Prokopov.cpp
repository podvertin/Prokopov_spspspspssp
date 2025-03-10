#include <iostream>
#include <vector>
#include <string>

class Worker {
public:
	std::string name, gender, post, department;
	int age, id;
	Worker() { name = "noname"; gender = "muzhzhen"; post = "undefined"; department = "obichni"; age = 0; id = 1; }
	Worker(int _id) :Worker() {
		id = _id;
	}
	Worker(std::string _gender) :Worker() { gender = _gender; }
	Worker(std::string _gender, std::string _post) :Worker(_gender) { post = _post; }
	Worker(std::string _gender, std::string _post, std::string _department) :Worker(_gender, _post) { department = _department; }
	Worker(std::string _gender, std::string _post, std::string _department, int _age) :Worker(_gender, _post, _department) { age = _age; }
	Worker(std::string _gender, std::string _post, std::string _department, int _age, std::string _name) :Worker(_gender, _post, _department, _age) {
		std::getline(std::cin, name);
	}
	
	void redact() {
		std::cout << "Введите гендер: " ; std::cin >> gender;
		std::cout << "Введите должность: "; std::cin >> post;
		std::cout << "Введите отдел: "; std::cin >> department;
		std::cout << "Введите возраст: "; std::cin >> age;
		std::cin.ignore(1, '\n');
		std::cout << "Введите ФИО: "; std::getline(std::cin, name);
	}

	void info() {
		std::cout << " id: " << id << " ФИО: " << name << " возраст: " << 
			age << " гендер: " << gender << " должность: " << post << " отдел: " << department << std::endl;
	}
};

int main() {
	system("chcp 1251"), system("cls");
	int choice = 0;
	std::vector<Worker>workers;
	
	int col_workers, choice_id, id_workers = 0;
	std::cout << "Введите кол-во рабочих: "; std::cin >> col_workers;
	for (int i = 0; i < col_workers; i++) {
		workers.push_back(Worker(id_workers));
		id_workers++;
	}

	do {
		std::cout << "\n1 - вывести на экран " << std::endl;
		std::cout << "2 - отредактировать рабочего " << std::endl;
		std::cout << "3 - добавить рабочего " << std::endl;
		std::cout << "4 - удалить рабочего " << std::endl;
		std::cout << "Ваш выбор - "; std::cin >> choice;
		switch (choice) {
		case 1:
			for (int i = 0; i < workers.size(); i++) {
				workers.at(i).info();
			}
			break;
		case 2: {

			std::cout << "Введите id пользователя: "; std::cin >> id_workers;
			for (int i = 0; i < workers.size(); i++) {
				if (workers.at(i).id == id_workers) {
					workers.at(i).redact();
				}
			}
			break;
		}
		case 3:
			std::cout << "Рабочий добавлен!";
			workers.push_back(Worker(id_workers));
			id_workers++;
			break;

		case 4:
			std::cout << "Введите ID который хотите удалить "; std::cin >> choice_id;
			for (int i = 0; i < workers.size(); i++) {
				if (workers.at(i).id == choice_id) {
					workers.erase(workers.begin() + i);
				}
			}
			break;
		}
	} while (choice != 0);

	return 0;
}