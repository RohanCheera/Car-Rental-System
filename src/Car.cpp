#include "Car.h"
#include <iostream>

Car::Car(int id, const std::string& model, const std::string& make, int year, const std::string& color, const std::string& status)
    : carID(id), model(model), make(make), year(year), color(color), status(status) {}

void Car::getDetails() const {
    std::cout << "Car ID: " << carID << "\nModel: " << model << "\nMake: " << make
              << "\nYear: " << year << "\nColor: " << color << "\nStatus: " << status << std::endl;
}

int Car::getID(){
    return carID;
}
void Car::reserveCar() {
    status = "Reserved";
}

void Car::returnCar() {
    status = "Available";
}
