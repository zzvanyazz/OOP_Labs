#include "grup.h"

Grup::Grup()
{
    cout << "name grup : ";
    cin >> name;
    cout << endl << "specialty : ";
    cin >> specialty;
    int numberStudents;
    cout <<endl<< "number Students: ";
    cin >> numberStudents;
    for(int i = 0; i < numberStudents; i++){
        students.push_back(new Student);
    }


}
