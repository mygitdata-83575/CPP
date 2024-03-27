/*Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)*/

#include <iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;

    public :
        void acceptDate(){
            cout<<"Enter Day,Month,Year - "<<endl;
            cin>>day>>month>>year;

        }
        void displayDate(){
            cout<<"Date is : "<<day<<"/"<<month<<"/"<<year<<endl;

        }

        
};

class Person{
    string name;
    string address;
    Date birthdate;

    public:
        void acceptData(){
            cout<<"Enter Name,Address,Birthdate - "<<endl;
            cin>>name>>address;
            birthdate.acceptDate();

        }
        void displayData(){
            cout<<"The Person name is :"<<name<<endl;
            cout<<"Person Address is : "<<address<<endl;
            birthdate.displayDate();

        }
};

class Employee : public Person{
    int id;
    double salary;
    string dept;
    Date doj;

    public:
        void acceptData(){
            cout<<"Enter Employee id,Salary,Dept "<<endl;
            cin>>id>>salary>>dept;

            doj.acceptDate();
            Person::acceptData();


        }
        void displayData(){
            cout<<"Employee id is : "<<id<<endl;
            cout<<"Salary is : "<<salary<<endl;
            cout<<"Dept is : "<<dept<<endl;

            doj.displayDate();
            Person::displayData();
            

        }
};

int main(){

    Person p;
    p.acceptData();
    p.displayData();
    
    Employee e;
    e.acceptData();
    e.displayData();

    Person*ptr = new Employee;
    ptr->acceptData();
    ptr->displayData();
    
    delete ptr;
    ptr = NULL;

    return 0;
}