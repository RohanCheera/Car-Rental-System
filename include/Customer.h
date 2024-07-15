#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    int customerID;
    std::string name;
    std::string address;
    std::string phone;
    std::string email;

public:
    Customer(int id, const std::string& name, const std::string& address, const std::string& phone, const std::string& email);
    void getCustomerDetails() const;
    int getID();
    void makeReservation();
};

#endif
