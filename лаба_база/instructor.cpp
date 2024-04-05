#include "Instructor.h"

Instructor::Instructor(const std::string& firstName, const std::string& lastName, int age, const Vehicle& vehicle)
    : Person(firstName, lastName, age), vehicle(vehicle) {}

void Instructor::printInstructorInfo() const {
    printInfo();
    vehicle.printVehicleInfo();
}
