#ifndef GRUP_H
#define GRUP_H
#include <student.h>
#include <string>
#include <iostream>
#include <list>

using namespace std;

class Grup
{
    list<Student*> students;
    string name;
    string specialty;
public:

    Grup();
    Grup(string, string);
    friend void operator<<(ostream &out, Grup &s){
        out << s.name << "    " << s.specialty << endl;
        int count = 1;
        for(Student* i: s.students){
            cout << count << endl;
            cout << (*i);
            cout << endl;
            count++;
        }
    }
};

#endif // GRUP_H
