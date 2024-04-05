#pragma once
#include <iostream>
#include <string>

class Location {
public:
    std::string region, city, district, street;
    Location(const std::string& region, const std::string& city, const std::string& district, const std::string& street);

    friend std::ostream& operator<<(std::ostream& os, const Location& location);
};
