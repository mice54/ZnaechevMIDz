﻿// data.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

//bez etogo ne zapustit'sa
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	while (true) {
		time_t t1 = time(NULL);
		cout << "Current Year: " << gmtime(&t1)->tm_year + 1900 << endl;
		cout << "Current Mounth: " << gmtime(&t1)->tm_mon + 1 << endl;
		cout << "Current Day: " << gmtime(&t1)->tm_mday << endl;
		cout << "Current Hour: " << gmtime(&t1)->tm_hour + 2 << endl;
		cout << "Current Minute: " << gmtime(&t1)->tm_min << endl;
		cout << "Current Second: " << gmtime(&t1)->tm_sec << endl;
		system("cls");
	}
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.