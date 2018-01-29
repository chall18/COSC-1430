//
// Created by Caitie Hall on 10/3/17.
//

#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car {
    int mileage;
public:
    string model;
    string color;

    Car();
    Car(string, string, int);

    int getMileage();
    void setMileage(int);
};

#endif //CAR_H

