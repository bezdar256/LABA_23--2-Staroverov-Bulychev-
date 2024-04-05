#include "Location.h"

Location::Location(const std::string& region, const std::string& city, const std::string& district, const std::string& street) : region(region), city(city), district(district), street(street) {}

std::ostream& operator<<(std::ostream& os, const Location& location) {
    return os << location.region << ", " << location.city << ", " << location.district << ", " << location.street;
}
