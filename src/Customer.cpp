#include "Customer.h"
#include <iostream>

Customer::Customer(int id, const std::string& name, const std::string& address, const std::string& phone, const std::string& email)
    : customerID(id), name(name), address(address), phone(phone), email(email) {}

void Customer::getCustomerDetails() const {
    std::cout << "Customer ID: " << customerID << "\nName: " << name << "\nAddress: " << address
              << "\nPhone: " << phone << "\nEmail: " << email << std::endl;
}
int Customer::getID(){
    return customerID;
}

void Customer::makeReservation() {
    // Implementation for making a reservation
}
