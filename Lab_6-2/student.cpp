#include "student.h"
#include <string>
#include <iostream>

Student::Student()
{
    std::cout << "name :";
    std::cin >> name ;
    std::cout << std::endl << "surname : ";
    std::cin >> surname ;
    std::cout << std::endl << "lastname : ";
    std::cin >> lastname;

}

Student::Student(std::string _name, std::string _surname, std::string _lastname):name(_name), surname(_surname), lastname(_lastname){};


