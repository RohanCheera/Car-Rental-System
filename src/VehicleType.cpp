#include "VehicleType.h"
#include <iostream>

VehicleType::VehicleType(int typeID, const std::string& typeName, double ratePerDay)
    : typeID(typeID), typeName(typeName), ratePerDay(ratePerDay) {}

void VehicleType::getTypeDetails() const {
    std::cout << "Type ID: " << typeID << "\nType Name: " << typeName << "\nRate per Day: " << ratePerDay << std::endl;
}
