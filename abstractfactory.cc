#include "string.h"
#include "stdio.h"

class Car
{
public:
    virtual void drive()=0;

};

class Benz:
    public Car
{
public:
    virtual void drive()
    {
        printf("Benz drive\n");
    }

};

class BMW:
    public Car
{
public:
    virtual void drive()
    {
        printf("BMW drive\n");
    }
};


class Driver
{
public:
    virtual Car* driveCar()=0;
};

class BMWDriver:
    public Driver

{
public:
    virtual Car* driveCar()
    {
        return new BMW; 

    }

};
class BenzDriver:
    public Driver

{
public:
    virtual Car* driveCar()
    {
        return new Benz; 

    }

};



int main()
{
    Driver *driver=new BenzDriver;
    Car *car=driver->driveCar();
    car->drive();
}

