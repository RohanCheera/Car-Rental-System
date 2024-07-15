#ifndef RENTALCOMPANY_H
#define RENTALCOMPANY_H

#include <string>
#include <vector>
#include "Location.h"
#include "Car.h"

class RentalCompany {
private:
    int companyID;
    std::string name;
    std::string address;
    std::string phone;
    std::vector<Location> locations;
    std::vector<Car> cars;

public:
    RentalCompany(int companyID, const std::string& name, const std::string& address, const std::string& phone);
    void addLocation(const Location& location);
    void addCar(const Car& car);
};

#endif
