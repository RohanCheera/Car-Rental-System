#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>

class Reservation {
private:
    int reservationID;
    int customerID;
    int carID;
    std::string startDate;
    std::string endDate;
    std::string status;

public:
    Reservation(int reservationID, int customerID, int carID, const std::string& startDate, const std::string& endDate, const std::string& status);
    void createReservation();
    void cancelReservation();
};

#endif
