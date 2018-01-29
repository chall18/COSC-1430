#include <iostream>
#include "Car.h"
using namespace std;
void problemThree(int arraySize)
{
    cout << "Problem 3" << endl;
    Car* carArray = new Car[arraySize];//dynamic array of type Car?
    string newModel;
    string newColor;
    int newMileage = 0;
    for(int i = 0; i < arraySize; i++)//trying to fill carArray
    {
        cout << "Enter model for car " << i+1 << ":";
        cin >> newModel;
        cout << "Enter color for car " << i+1 << ":";
        cin >> newColor;
        cout << "Enter mileage for car " << i+1 << ":";
        cin >> newMileage;
        *carArray = Car(newModel, newColor, newMileage);
        //iterator++;
        carArray++;
    }
    carArray -= arraySize;//resetting the counting pointer
    for(int i = 0; i < arraySize; i++)
    {
        cout << carArray->model << " " << carArray->color << " " << carArray->getMileage() << endl;
        //iterator++;
        carArray++;
    }
    carArray = 0;
    delete [] carArray;
}
void problemTwo(int arraySize)
{
    cout << "Problem 2" << endl;
    int* numbers = new int[arraySize];//dynamically allocated integer array
    int* iterator = numbers;
    for(int i = 0; i < arraySize; i++)//Filling the array
    {
        cout << "Enter next number: ";
        cin >> *iterator;
        iterator++;
    }
    iterator -= arraySize;
    for(int j = 0; j < arraySize; j++)
    {
        cout << *iterator << " ";
        iterator++;
    }
    cout << endl;
    delete [] numbers;
}
void problemOne(int arraySize)
{
    cout << "Problem 1" << endl;
    int numbers[arraySize];
    for(int i = 0; i < arraySize; ++i)
    {
        cout << "Enter next number" << endl;
        cin >> numbers[i];
    }
    int *p = numbers;
    for(int i = 0; i < arraySize; i++)
    {
        cout << *p << " ";//Print contents of portion of array pointed to
        p++;//address of place within array + 4;
    }
    cout << endl;
}
int main(int argc, char *argv[])
{
    problemOne(atoi(argv[1]));
    problemTwo(atoi(argv[2]));
    problemThree(atoi(argv[3]));
    return 0;
}