#include "Address.h"
#include <iostream>

Address::Address(const std::string& region, const std::string& city, const std::string& district, const std::string& street)
    : region(region), city(city), district(district), street(street) {}

void Address::printAddress() const {
    std::cout << "Address: " << region << ", " << city << ", " << district << ", " << street << std::endl;
}
