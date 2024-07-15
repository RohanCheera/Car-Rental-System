#include "Reservation.h"
#include <iostream>

Reservation::Reservation(int reservationID, int customerID, int carID, const std::string& startDate, const std::string& endDate, const std::string& status)
    : reservationID(reservationID), customerID(customerID), carID(carID), startDate(startDate), endDate(endDate), status(status) {}

void Reservation::createReservation() {
    std::cout << "Reservation created with ID: " << reservationID << std::endl;
}

void Reservation::cancelReservation() {
    status = "Cancelled";
    std::cout << "Reservation cancelled with ID: " << reservationID << std::endl;
}
