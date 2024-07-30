// Name:  Jon Baarsch
// Date: 
// CS2 at UCA with Baarsch

#include <iostream>
#include <iomanip>
#include "GradedActivity.h"
#include "FinalExam.h"
#include "Dog.h"
#include "HuntingDog.h"
using namespace std;

class Vehicle {
public:
    int passengers;
    Vehicle() {
        cout << "A vehicle constructor was called." << endl;
    }
    Vehicle(int pass) {
        passengers = pass;
        std::cout << "A vehicle constructor was called. and " 
            << passengers << " passengers were assigned"
            <<endl;
    }
};
class Automobile : public Vehicle {
private:
    int numWheels;
public:
    Automobile(int pass, int wheels) : Vehicle(pass), numWheels(wheels) {
        cout << "A Automobile constructor was called." << endl;
    }
};
class Semi : public Automobile {
public:
    Semi() : Automobile(2, 8) {

    }
};

class Car : public Automobile {
public:
    Car() : Automobile(0, 4) {
        cout << "A Car constructor was called." << endl;
    }
};
class Hatchback : protected Car {
public:
    Hatchback() {
        cout << "A Hatchback constructor was called." << endl;
    }
};
class HondaFit : protected Hatchback {
public:
    HondaFit() {
        cout << "A Honda Fit constructor was called." << endl;
    }
};
class HondaFit2011 : public HondaFit {
public:
    HondaFit2011() {
        cout << "A 2011 Honda Fit constructor was called." << endl;
    }
};



int main()
{

    Dog spenser;
    HuntingDog shayla;

    Dog* dogs[2];
    dogs[0] = &spenser;
    dogs[1] = &shayla;


    for (Dog* &d : dogs)
        d->doTrick();


}

