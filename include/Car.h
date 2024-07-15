#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    int carID;
    std::string model;
    std::string make;
    int year;
    std::string color;
    std::string status;

public:
    Car(int id, const std::string& model, const std::string& make, int year, const std::string& color, const std::string& status);
    void getDetails() const;
    int getID();
    void reserveCar();
    void returnCar();
};

#endif
