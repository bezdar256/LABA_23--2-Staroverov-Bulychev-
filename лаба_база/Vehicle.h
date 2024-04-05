#pragma once
#include <string>
#include <iostream>

class Vehicle {
public:
    std::string model;
    std::string category;

    Vehicle(const std::string& model, const std::string& category);
    void printVehicleInfo() const;
};
