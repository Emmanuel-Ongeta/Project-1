#ifndef FUNCTION_H
#define FUNCTION_H

struct Car {
    char model;
    int year;
    float price;
};
void displayCar(struct Car *carsArray, int arraySize);
void printCar(struct Car *carsArray, int arraySize);
#endif
