#include<iostream>
using namespace std;

/*
Q1. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.

*/
class Cylinder{
    static const float PI;
    double radius;
    double height;

    public:


        /*
         Cylinder():radius(1),height(1)){
        
       }
        */ 
       Cylinder(){
        radius = 1;
        height = 1;
       }
       Cylinder(double radius, double height){
         this->radius = radius;
         this->height = height;
       }
       double getRadius(){
         return radius;
       }
       void setRadius(double radius){
         this->radius = radius;
       }

       double getHeight(){
        return height;
       }
       void setHeight(double height){
        this->height = height;
       }

       double getVolume(){
        return PI*radius*radius*height;
       }
       void printVolume(){
        cout<<"Volume of Cylinder is : "<<PI*radius*radius*height<<endl;

       }

};

const float Cylinder::PI = 3.14;

int main(){
    Cylinder c1;
    c1.printVolume();

    c1.setHeight(5);
    double h1=c1.getHeight();
    cout<<"Height = "<<h1<<endl;

    c1.setRadius(10);
    double r1=c1.getRadius();
    cout<<"radius : "<<r1<<endl;

    c1.printVolume();
    return 0;
}


