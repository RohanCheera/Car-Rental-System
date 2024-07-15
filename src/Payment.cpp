#include "Payment.h"
#include <iostream>

Payment::Payment(int paymentID, int rentalID, double amount, const std::string& paymentDate, const std::string& paymentMode)
    : paymentID(paymentID), rentalID(rentalID), amount(amount), paymentDate(paymentDate), paymentMode(paymentMode) {}

void Payment::makePayment() {
    std::cout << "Payment made with ID: " << paymentID << " for rental ID: " << rentalID << std::endl;
}
