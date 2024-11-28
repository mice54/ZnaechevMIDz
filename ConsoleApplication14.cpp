// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "BlockNote.h"
#include "Student.h"

using namespace std;

int main()
{
    BlockNote b;
    std::cin >> b;
    Note* a = b.find("ABOBA");
    std::cout << (*a);
    Student c[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
        cout << "-----------------\n";
    }
    float mean=0;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++) mean += c[i].grades[j];
        mean /= 5;
        if (mean >= 4.0f) cout << c[i];
        mean = 0;
    }
}