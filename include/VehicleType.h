#ifndef VEHICLETYPE_H
#define VEHICLETYPE_H

#include <string>

class VehicleType {
private:
    int typeID;
    std::string typeName;
    double ratePerDay;

public:
    VehicleType(int typeID, const std::string& typeName, double ratePerDay);
    void getTypeDetails() const;
};

#endif
