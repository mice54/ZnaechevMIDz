#pragma once
#include "Note.h"
class BlockNote
{
public:
	Note Arr[8];
	BlockNote(Note a1, Note a2, Note a3, Note a4, Note a5, Note a6, Note a7, Note a8);
	BlockNote() = default;
	Note* find(std::string name);
};
std::ostream& operator <<(std::ostream& os, BlockNote n);
std::istream& operator >>(std::istream& os, BlockNote& n);
