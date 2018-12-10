#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Person{
    string name;
    string surname;
    int age;
    string phone;
    string education_palse;
public:
    Person(){
        cout << "name, surname, age, phone, education_plase" << endl;
        cin >> name ;
        cin >> surname;
        cin >> age;
        cin>> phone;
        cin>> education_palse;
        cout << endl;
    }

    friend void operator<<(ofstream &out, Person &p){
        out << p.name << "    " << p.surname <<"    " << p.age <<"    " << p.phone <<"    " << p.education_palse << endl;
    }
};



int main()
{


    ofstream myfile;
    Person p;

    myfile.open ("myfile.txt");
    myfile << p;
    myfile.close();

    return 0;
}
