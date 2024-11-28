#include "Note.h"


Note::Note(std::string Name, std::string Phone, uint16_t day, uint16_t mounth, uint16_t year)
{
    this->Name = Name;
    this->Phone = Phone;
    BDay[0] = day;
    BDay[1] = mounth;
    BDay[2] = year;
}
std::ostream& operator <<(std::ostream& os, Note n) {
    os << n.Name << "\t" << n.Phone << "\t" << n.BDay[0] << "\t" << n.BDay[1] << "\t" << n.BDay[2];
    return os;
}
std::istream& operator >>(std::istream& is, Note& n) {
    std::string Name;
    std::string Phone;
    uint16_t day;
    uint16_t mounth;
    uint16_t year;
    std::cin >> Name;
    std::cin >> Phone;
    std::cin >> day;
    std::cin >> mounth;
    std::cin >> year;
    Note tmp(Name, Phone, day, mounth, year);
    n = tmp;
    return is;
}

