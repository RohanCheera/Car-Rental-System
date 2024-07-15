#include "Location.h"
#include <iostream>

Location::Location(int locationID, const std::string& address, const std::string& city, const std::string& state, const std::string& zipCode)
    : locationID(locationID), address(address), city(city), state(state), zipCode(zipCode) {}

void Location::getLocationDetails() const {
    std::cout << "Location ID: " << locationID << "\nAddress: " << address << "\nCity: " << city
              << "\nState: " << state << "\nZip Code: " << zipCode << std::endl;
}
