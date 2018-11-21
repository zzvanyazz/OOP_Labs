#include "facultet.h"

Facultet::Facultet()
{
    cout << "Faculty name : ";
    cin >> name ;
    int numberGrups;
    cout << endl << "number grups : ";
    cin >>numberGrups;
    for(int i = 0; i < numberGrups; i++){
        grups.push_back(new Grup());
    }
    cout << endl;
}
