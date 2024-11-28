//Note.h
#pragma once
#include <string>
#include <iostream>

class Note {
public:
	std::string Name;
	std::string Phone;
	int BDay[3];
	Note(std::string Name, std::string Phone, uint16_t day, uint16_t mounth, uint16_t year);
	Note() = default;
};

std::ostream& operator <<(std::ostream& os, Note n);
std::istream& operator >>(std::istream& is, Note& n);