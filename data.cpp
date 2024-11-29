// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

//Ифы для выбора функции для слабых для сильных задавать значения указателя через гетпрокадресс и указатели на функцию
#include <Windows.h>

struct Diver
{
	Diver(std::string name, int age, int depth, int experience) : name(name), age(age), experience(experience) {}
	Diver() = default;
	std::string name="";
	int age=0, depth=0, experience=0;
};

std::ostream& operator <<(std::ostream& os, Diver d) {
	os << "this is diver with name \"" 
		<< d.name 
		<< "\", work for: " 
		<< d.experience 
		<< " years, age: "
		<< d.age 
		<< " and max depth that he/she can go down: " 
		<< d.depth;
	return os;
}

std::istream& operator >> (std::istream& is, Diver& d) {
	is >> d.name;
	is >> d.age;
	is >> d.depth;
	is >> d.experience;
	return is;
}

void dive() {
	std::ifstream f;
	f.open("Divers.txt");
	f.close();
	Diver b[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> b[i];
	}
	std::fstream a;
	a.open("Divers.txt");
	for (int i = 0; i < 5; i++)
	{
		a << b[i] << std::endl;
	}
	Diver tmp;
	system("cls");
	a.close();
	a.open("Divers.txt");
	for (int i = 0; i < 5; i++)
	{
		a >> tmp;
		std::cout << tmp << std::endl;
	}
}

void food() {
	std::ostream& o = std::cout;
	std::string command;

	std::string trash, category;
	int day, mouth, year, count;


	std::fstream os;
	os.open("food.txt",std::ios::in | std::ios::out | std::ios::app);

	void(*command1)() = (void(*)())GetProcAddress(GetModuleHandleW(nullptr), command.c_str());
#define false b=1==1
#define true c=1==0
	bool false;
	bool true;
	while (false) {
		o << "Please enter command" << std::endl;
		std::cin >> command;
		//ладно забудьте чо я там про ифы говорил они норм
		if (command == "check") {
			time_t t1 = time(NULL);
			while (os >> trash >> day >> mouth >> year >> count >> category) {
#undef true
#undef false
				bool outdate =
					year < gmtime(&t1)->tm_year + 1900?(mouth < gmtime(&t1)->tm_mon + 1?day < gmtime(&t1)->tm_mday:true):true;
#define false b=1==1
#define true c=1==0
				if (outdate) {
					std::cout << trash << " " << day << " " << mouth << " " << year << " " << count << " " << category << std::endl;
				}
			}
		}
		else if (command == "add") {
			std::string trash, category;
			int day, mouth, year, count;
			std::cout << "napishi imya srok godnosti kol-vo i kategoriyu" << std::endl;
			std::cin >> trash >> day >> mouth >> year >> count >> category;
			os << trash << " " << day << " " << mouth << " " << year << " " << count << " " << category << std::endl;
		}
		else if (command == "exit") {
			os.close();
			os.close();
			std::exit(0);
		}
		else std::cerr << "tvoya komanda invalid" << std::endl;
	}
}

int main()
{
	std::string a;
	std::cin >> a;
	if (a == "food")food();
	else if (a == "diver")dive();
	else std::cerr << "Bro eto ne komanda, ponimaesh brattela";
}
