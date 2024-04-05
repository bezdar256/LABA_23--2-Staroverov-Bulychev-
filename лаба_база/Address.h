#pragma once
#include <string>

class Address {
public:
    std::string region;
    std::string city;
    std::string district;
    std::string street;

    Address(const std::string& region, const std::string& city, const std::string& district, const std::string& street);
    void printAddress() const;
};
