#ifndef FACULTET_H
#define FACULTET_H
#include <grup.h>
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Facultet
{
    list<Grup*> grups;
    string name;
public:
    Facultet();
    friend void operator<<(istream &out, Facultet &f){
        cout << "Faculty  "<<f.name << endl;
        for(Grup *i:f.grups){
            cout << i ;
            cout << endl << endl;
        }

    }
};

#endif // FACULTET_H
