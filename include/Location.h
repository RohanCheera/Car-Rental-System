#ifndef LOCATION_H
#define LOCATION_H

#include <string>

class Location {
private:
    int locationID;
    std::string address;
    std::string city;
    std::string state;
    std::string zipCode;

public:
    Location(int locationID, const std::string& address, const std::string& city, const std::string& state, const std::string& zipCode);
    void getLocationDetails() const;
};

#endif
