#pragma once
#include "Person.h"
#include <string>

class TheoryTeacher : public Person {
public:
    std::string subject;

    TheoryTeacher(const std::string& firstName, const std::string& lastName, int age, const std::string& subject);
    void printTeacherInfo() const;
};
