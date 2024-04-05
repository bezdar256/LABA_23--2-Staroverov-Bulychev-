#include "Person.h"

Person::Person(const std::string& firstName, const std::string& lastName, int age)
    : firstName(firstName), lastName(lastName), age(age) {}

void Person::printInfo() const {
    std::cout << "Name: " << firstName << " " << lastName << ", Age: " << age << std::endl;
}
