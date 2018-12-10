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

    }

    friend void operator>>(ifstream &out, Person &p){
        out  >> p.name ;
        out  >> p.surname;
        out  >> p.age;
        out >>  p.phone;
        out >>  p.education_palse;
        cout << endl;
    }
    friend void operator<<(ostream &out, Person &p){
        out << p.name << "    " << p.surname <<"    " << p.age <<"    " << p.phone <<"    " << p.education_palse << endl;
    }
};



int main()
{


    ifstream myfile;
    Person p;

    myfile.open ("myfile.txt");
    myfile >> p;
    cout << p;
    myfile.close();

    return 0;
}
