#ifndef RENTAL_H
#define RENTAL_H

#include<string>

class Rental {
private:
    int rentalID;
    int carID;
    int customerID;
    std::string startDate;
    std::string endDate;
    double totalAmount;

public:
    Rental(int rentalID, int carID, int customerID, const std::string& startDate, const std::string& endDate, double totalAmount);
    int getID();
    void createRental();
    void closeRental();
};

#endif
