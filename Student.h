//Student.h
#pragma once
#include <iostream>

class Student
{
public:
	std::string name;
	std::string subjects[5];
	uint16_t grades[5];
	Student(std::string name, std::string* subject, uint16_t* grades);
	Student() = default;
};

std::ostream& operator <<(std::ostream& os, Student s);
std::istream& operator >>(std::istream& is, Student& s);