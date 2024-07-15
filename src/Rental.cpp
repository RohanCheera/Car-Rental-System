#include "Rental.h"
#include <iostream>

Rental::Rental(int rentalID, int carID, int customerID, const std::string &startDate, const std::string &endDate, double totalAmount)
    : rentalID(rentalID), carID(carID), customerID(customerID), startDate(startDate), endDate(endDate), totalAmount(totalAmount) {}

void Rental::createRental()
{
    std::cout << "Rental created with ID: " << rentalID << std::endl;
}
int Rental::getID() { return rentalID; }
void Rental::closeRental()
{
    std::cout << "Rental closed with ID: " << rentalID << std::endl;
}
