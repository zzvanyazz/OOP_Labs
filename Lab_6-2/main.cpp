#include <iostream>
#include <student.h>
using namespace std;


int main()
{

    Student a, b("b", "b", "b"), *c = new Student("c", "c", "c");
    cout << a;
    cout << b;
    cout << *c;
    return 0;
}
