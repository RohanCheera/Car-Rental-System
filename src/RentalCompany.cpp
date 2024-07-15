#include "RentalCompany.h"

RentalCompany::RentalCompany(int companyID, const std::string& name, const std::string& address, const std::string& phone)
    : companyID(companyID), name(name), address(address), phone(phone) {}

void RentalCompany::addLocation(const Location& location) {
    locations.push_back(location);
}

void RentalCompany::addCar(const Car& car) {
    cars.push_back(car);
}
