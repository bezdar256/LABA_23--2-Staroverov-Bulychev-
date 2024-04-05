#pragma once
#include <string>
#include <iostream>

class Person {
protected:
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person(const std::string& firstName, const std::string& lastName, int age);
    virtual void printInfo() const;
};
