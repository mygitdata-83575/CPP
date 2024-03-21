/*Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.*/

#include<iostream>
using namespace std;

class Address
{
    string building,street,city;
    int pin;

    public:

    Address()
    {
        building=" ";
        street=" ";
        city=" ";
        pin=416005;
    }

    Address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }

   string getbuilding()
    {
        return building;

    }
    string getStreet()
    {
        return street;
    }
    string getCity()
    {
        return city;
    }
    int getPin()
    {
        return pin;
    }

    void setAddress()
    {
        this->building="PM Apartments";
        this->street="Unchgaon";
        this->city="Kolhapur";
    }

    void accept()
    {
        cout<<"Enter building,street,city,pin:";
        cin>>building>>street>>city>>pin;

    }

   void display()
    {
        cout<<"Building name is:"<<building<<"\nStreet is:"<<street<<"\nCity is:"<<city<<"\nPin is:"<<pin<<endl;
    }
    
};

int main()
{
    Address a1("PM apartments","Unchgaon","kolhapur",416005);
    a1.getbuilding();
    a1.getCity();
    a1.getStreet();
    a1.getPin();
    a1.setAddress(); 
    a1.accept();
    a1.display();
    
    return 0;
}