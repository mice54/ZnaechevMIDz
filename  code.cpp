// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct pru
{
    uint32_t widght, height;
    pru(uint32_t w, uint32_t h) {
        widght = w;
        height = h;
    }
    void resize(uint32_t w, uint32_t h) {
        widght = w;
        height = h;
    }
    uint32_t area() {
        return widght * height;
    }
};
//на вопрос почему 9 на 9 выглядит как прямоугольник ответ прост: кол-во пикселей в высоту на символ больше чем в длинну
std::ostream& operator << (std::ostream& os, pru p) {
    if (p.area() == 0) throw("invalid_argument");
    for (uint32_t i = 0; i < p.widght; i++)
    {
        os << "*";
    }
    os << "\n";
    for (uint32_t j = 0; j < p.height-2; j++)
    {
        os << "*";
        for (uint32_t i = 1; i < p.widght-1; i++)
        {
            os << " ";
        }
        os << "*\n";
    }
    for (uint32_t i = 0; i < p.widght; i++)
    {
        os << "*";
    }
    return os;
}

struct Data
{
    enum mounths {
        january,
        fevral,
        march,
        april,
        may,
        june,
        jule,
        augustin,
        september,
        october,
        november,
        december
    };
    int16_t day=1;
    mounths mounth;
    uint32_t year;
    Data(uint8_t d, mounths m, int32_t y) {
        day = d;
        mounth = m;
        year = y;
        if (d > 31) { throw("Invalid Argument"); }
        Normalize();
    }
    bool Vesokosnyy() { return (year % 4) == 0; }
    void Normalize(){
        switch (mounth)
        {
        case Data::january:
            if (day > 31) { 
                day -= 31;
                mounth=fevral;
                Normalize(); //написал на случай 127 января
            }
            break;
        case Data::fevral:
            if(Vesokosnyy()){
                if (day > 29) {
                    day -= 29;
                    mounth = march;
                    Normalize();
                }
            }
            else {
                if (day > 28) {
                    day -= 28;
                    mounth = march;
                    Normalize();
                }
            }
            break;
        case Data::march:
            if (day > 31) {
                day -= 31;
                mounth = april;
                Normalize();
            }
            break;
        case Data::april:
            if (day > 30) {
                day -= 30;
                mounth = may;
                Normalize();
            }
            break;
        case Data::may:
            if (day > 31) {
                day -= 31;
                mounth = june;
                Normalize();
            }
            break;
        case Data::june:
            if (day > 30) {
                day -= 30;
                mounth = jule;
                Normalize();
            }
            break;
        case Data::jule:
            if (day > 31) {
                day -= 31;
                mounth = augustin;
                Normalize();
            }
            break;
        case Data::augustin:
            if (day > 31) {
                day -= 31;
                mounth = september;
                Normalize();
            }
            break;
        case Data::september:
            if (day > 30) {
                day -= 30;
                mounth = october;
                Normalize();
            }
            break;
        case Data::october:
            if (day > 31) {
                day -= 31;
                mounth = november;
                Normalize();
            }
            break;
        case Data::november:
            if (day > 30) {
                day -= 30;
                mounth = december;
                Normalize();
            }
            break;
        case Data::december:
            if (day > 31) {
                day -= 31;
                mounth = january;
                year++;
                Normalize();
            }
            break;
        default:
            break;
        }
    }
    void nextDay() { day++; Normalize(); }
    void previusDay() { day--; Normalize(); }
};

std::ostream& operator << (std::ostream& os, Data d) {
    os << d.day << ".";
    os << d.mounth+1 << ".";
    os << d.year;
    return os;
}

template<typename T=int>
struct Array
{
    T A[5];
    Array(T a,T b,T c,T d,T e) {
        A[0] = a;
        A[1] = b;
        A[2] = c;
        A[3] = d;
        A[4] = e;
    }
    Array() = default;
    float Mean() { return (A[0] + A[1] + A[2] + A[3] + A[4]) / 5; }
    T Min() {
        T tmp = A[0];
        for (int i = 1; i < 5; i++)
        {
            tmp = (A[i] < tmp ? A[i] : tmp);
        }
        return tmp;
    }
    T Max() {
        T tmp = A[0];
        for (int i = 1; i < 5; i++)
        {
            tmp = (A[i] > tmp ? A[i] : tmp);
        }
        return tmp;
    }
    void cRead() {
        for (int i = 0; i < 5; i++)
        {
            std::cin >> A[i];
        }
    }
};

template<typename T = int>
std::ostream& operator <<(std::ostream& os, Array<T> a) {
    for (int i = 0; i < 5; i++)
    {
        os << a.A[i] << " ";
    }
    return os;
}

int main()
{
    pru p(9, 9);
    std::cout << p<<std::endl;
    Data d(31, Data::december, 2024);
    std::cout << d << std::endl;
    d.nextDay();
    std::cout << d << std::endl;
    Array<int> a(0,0,0,0,0);
    a.cRead();
    std::cout << a << std::endl;
    std::cout << a.Mean() << std::endl;
    std::cout << a.Max() << std::endl;
    std::cout << a.Min() << std::endl;

}
//v etom kode uchastvavalo 0 chatgpt :)
