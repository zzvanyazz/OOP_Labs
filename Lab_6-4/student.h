#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

class Student
{

    std::string name;
    std::string surname;
    std::string lastname;
public:

    Student() ;
    Student(std::string, std::string, std::string);

    friend void operator<<(std::ostream  &out, Student s){
        out << s.name << "  "<< s.surname<< "  "<< s.lastname <<'\n' ;
    }

};

#endif // STUDENT_H
