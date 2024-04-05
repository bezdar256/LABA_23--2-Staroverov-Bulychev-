#pragma once
#include "Person.h"
#include "Location.h"
#include <string>
#include <iostream>

class Student : public Person {
public:
    std::string patronymic;
    Location location;

    Student(const std::string& firstName, const std::string& lastName, const std::string& patronymic, int age, const Location& location);

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
};
