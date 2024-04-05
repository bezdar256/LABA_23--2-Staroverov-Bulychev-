#include "Student.h"

Student::Student(const std::string& firstName, const std::string& lastName, const std::string& patronymic, int age, const Location& location) : Person(firstName, lastName, age), patronymic(patronymic), location(location) {}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    return os << "Student Name: " << student.firstName << " " << student.lastName << " " << student.patronymic << "\nAge: " << student.age << "\nLocation: " << student.location;
}
