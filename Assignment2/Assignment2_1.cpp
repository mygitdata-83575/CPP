/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/


#include<iostream>
using namespace std;

class Box{
    int length;
    int breadth;
    int height;

    public:
      Box(){
        length =1;
        breadth =1;
        height = 1;

      }

      Box(int a, int b,int c){
        length = a;
        breadth = b;
        height = c;

      }

      Box(int a) {
        length=breadth=height =a;

      }

      void Volume(){
        int Volume = length*breadth*height;
        cout<<Volume<<endl;
      }
};

int main(){
    Box b1;
    Box b2(4,5,6);
    Box b3(5);
    int choice;
    
    //b2.Volume();

    do
    {
        cout<<"0.Exit"<<endl;
        cout<<"1.Calculate Volume with default values"<<endl;
        cout<<"2.Calculate Volume with different length,breadth and height values"<<endl;
        cout<<"3.Calculate Volume with length,breadth and height with same value"<<endl;
        cout<<"Enter your Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
               cout<<"Thank you for choosing"<<endl;
               break;
            case 1:
                b1.Volume();
                break;
            case 2:
                b2.Volume();
                break;
            case 3:
                b3.Volume();
                break;

            default:
            cout<<"Wrong Choice";           
        }

        
    } while(choice!=0);
    
        
  return 0;
}