#pragma once
#include "Person.h"
#include "Vehicle.h"

class Instructor : public Person {
private:
    Vehicle vehicle;

public:
    Instructor(const std::string& firstName, const std::string& lastName, int age, const Vehicle& vehicle);
    void printInstructorInfo() const;
};
