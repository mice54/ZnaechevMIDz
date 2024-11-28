//Student.cpp
#include "Student.h"
Student::Student(std::string name, std::string* subject, uint16_t* grades) {
	this->name = name;
	for (int i = 0; i < 5; i++)
	{
		this->subjects[i] = subject[i];
	}
	for (int i = 0; i < 5; i++)
	{
		this->grades[i] = grades[i];
	}

}
std::istream& operator >>(std::istream& is, Student& s) {
	is >> s.name;
	for (int i = 0; i < 5; i++)
	{
		is >> s.subjects[i] >> s.grades[i];
	}
	return is;
}
std::ostream& operator <<(std::ostream& os, Student s) {
	os << s.name;
	for (int i = 0; i < 5; i++)
	{
		os << " " << s.subjects[i] << " " << s.grades[i];
	}
	return os;
}