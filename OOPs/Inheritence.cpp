#include <iostream>
using namespace std ;
// --------------------------------**  Machine class  ** ------------------------------------------- 
class Machine
{
public:
    void engine()
    {
        cout<<"1.1 ltr"<<endl;
    }
};

// -------------------------------** Car Class inherites Machine class ** ----------------------------
class Car:public Machine
{
public:
        void horn()
        {
            cout<<"blow horn"<<endl;
        }
};

// -----------------------------------** Vehicle inherites Machine class **-------------------------------
class Vehicle:public Machine
{
public:
    void wheel() 
    {
        cout<<"4 wheel"<<endl;
    }
};

// ------------------------------------** Dzire inherites Car and Vehicle class **--------------------------
class Dzire:public Car,public Vehicle
{
public:
    void seater()
    {
        Car::engine();                  // To solve the ambiguity 
        // Vehicle::engine();              //  to solve the ambiguity
        cout<<"5 seater.."<<endl;
    }
};

// -----------------------------------** Main Function **-------------------------------------------------
int main()
{
    Dzire *d=new Dzire();     // Creating object using Dzire class  
   
    d->horn();
    d->wheel();
    d->seater();
    return 0;

}