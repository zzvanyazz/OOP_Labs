#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream myfile;
    myfile.open ("myfile.txt");

    string  name, surname, studing_plase, phone;
    int age;
    myfile>>name >> surname >> age >> phone>>studing_plase;
    cout << name << "   " <<surname << "   " << age <<  "   " <<phone <<  "   " <<studing_plase;
    myfile.close();

    return 0;
}

