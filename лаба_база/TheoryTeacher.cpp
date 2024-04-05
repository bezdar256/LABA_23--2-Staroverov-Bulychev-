#include "TheoryTeacher.h"

TheoryTeacher::TheoryTeacher(const std::string& firstName, const std::string& lastName, int age, const std::string& subject)
    : Person(firstName, lastName, age), subject(subject) {}

void TheoryTeacher::printTeacherInfo() const {
    printInfo();
    std::cout << "Subject: " << subject << std::endl;
}
