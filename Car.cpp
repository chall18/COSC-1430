//
// Created by Caitie Hall on 10/3/17.
//

#include "Car.h"

Car::Car() {
    color = "tan";
    model = "civic";
    mileage = 100000;
}

Car::Car(string model, string color, int mileage) {
    this->color = color;
    this->model = model;
    this->mileage = mileage;
}

int Car::getMileage() {
    return mileage;
}

void Car::setMileage(int newMileage) {
    mileage = newMileage;
}
