#include <iostream>
#include "Car.h"
#include "Customer.h"
#include "Rental.h"
#include "Payment.h"
#include "Reservation.h"
#include "RentalCompany.h"
#include "Location.h"
#include "VehicleType.h"

int main() {
    Car car1(1, "Model S", "Tesla", 2021, "Red", "Available");
    car1.getDetails();

    Customer customer1(1, "John Doe", "123 Elm Street", "123-456-7890", "john.doe@example.com");
    customer1.getCustomerDetails();

    car1.reserveCar();
    car1.getDetails();

    car1.returnCar();
    car1.getDetails();

    Rental rental1(1, car1.getID(), customer1.getID(), "2023-07-01", "2023-07-07", 700);
    rental1.createRental();

    Payment payment1(1, rental1.getID(), 700, "2023-07-01", "Card");
    payment1.makePayment();

    Location location1(1, "456 Maple Avenue", "Springfield", "IL", "62704");
    location1.getLocationDetails();

    VehicleType vehicleType1(1, "SUV", 100);
    vehicleType1.getTypeDetails();

    RentalCompany company1(1, "Best Rentals", "789 Oak Street", "123-789-4560");
    company1.addLocation(location1);
    company1.addCar(car1);

    return 0;
}
