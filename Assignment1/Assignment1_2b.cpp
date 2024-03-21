#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;

    public:
      void initDate(){
        day = 12,month = 04,year = 2024;
        cout<<"Date -"<<day<<"/"<<month<<"/"<<year<<endl;
     }
      
      void acceptDateFromConsole(){
         cout<<"Enter Date - "<<endl;
         cin>>day>>month>>year;
      }

      void printDateOnConsole(){
        cout<<"Date is - "<<day<<"/"<<month<<"/"<<year<<endl;
      }


};

int main(){
    int choice;
    Date d;

    do{
        cout<<"0. Exit"<<endl;
        cout<<"1.Init Date"<<endl;
        cout<<"2.Accept Date"<<endl;
        cout<<"3.print Date"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 0:
            cout<<"Thank for visiting"<<endl;
            break;

            case 1:
            d.initDate();
            break;

            case 2:
            d.acceptDateFromConsole();
            break;

            case 3:
            d.printDateOnConsole();
            break;

            default :
             cout<<"Wrong Choice";
        }
    } while(choice!=0);


    return 0;
}
