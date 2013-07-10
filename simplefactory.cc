#include <iostream>
#include <string.h>

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
    static Car* driveCar(const char* s)
    {
        if(strcmp(s,"benz")==0)
        {
            return new Benz;
        }
        else if(strcmp(s,"bmw")==0)
        {
            return new BMW;
        }
        else
        {
            return NULL;
        }
    }
};

int main()
{
    Car *car=Driver::driveCar("benz");
    car->drive();
}
