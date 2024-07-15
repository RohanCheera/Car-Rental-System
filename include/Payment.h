#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

class Payment {
private:
    int paymentID;
    int rentalID;
    double amount;
    std::string paymentDate;
    std::string paymentMode;

public:
    Payment(int paymentID, int rentalID, double amount, const std::string& paymentDate, const std::string& paymentMode);
    void makePayment();
};

#endif
