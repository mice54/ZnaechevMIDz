//BlockNote.cpp
#include "BlockNote.h"
#include "Note.h"

BlockNote::BlockNote(Note a1, Note a2, Note a3, Note a4, Note a5, Note a6, Note a7, Note a8) {
    Arr[0] = a1;
    Arr[1] = a2;
    Arr[2] = a3;
    Arr[3] = a4;
    Arr[4] = a5;
    Arr[5] = a6;
    Arr[6] = a7;
    Arr[7] = a8;
}
Note* BlockNote::find(std::string name) {
    for (int n = 0; n < 8;n++) {
        if (Arr[n].Name == name) return &Arr[n];
    }
    std::cerr << "NOPE"<<std::endl;
    return new Note("","",1,1,1);
}
std::ostream& operator <<(std::ostream& os, BlockNote n) {
    for (int i = 0; i < 8; i++)
    {
        os << n.Arr[i] << "\n";
    }
    return os;
}
std::istream& operator >>(std::istream& is, BlockNote& n) {
    Note tmp("ERR", "ERR", 0, 0, 0);
    for (int i = 0; i < 8; i++)
    {
        is >> tmp;
        n.Arr[i] = tmp;
    }
    return is;
}