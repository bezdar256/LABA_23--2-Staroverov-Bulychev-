#include "Vehicle.h"

Vehicle::Vehicle(const std::string& model, const std::string& category)
    : model(model), category(category) {}

void Vehicle::printVehicleInfo() const {
    std::cout << "Model: " << model << ", Category: " << category << std::endl;
}
