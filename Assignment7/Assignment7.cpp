/*Q1. Provide menu driven code for the functionalities:
1. Accept Employee
2. Display the count of all employees with respect to designation
3. Display All Managers
4. Display All Salesman
5. Display All SalesManagers*/



#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main(){
    Employee *arr[5];
    int index = 0;
    int choice;
    int m=0;
    int s=0;
    int sm=0;

    do{ 
        cout<<"0. Exit"<<endl;
        cout<<"1. Accept Employee"<<endl;
        cout<<"2. Display the count of all employees with respect to designation"<<endl;
        cout<<"3. Display All Managers"<<endl;
        cout<<"4. Display All Salesman"<<endl;
        cout<<"5. Display All SalesManagers"<<endl;
        cout<<" Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0 :
                cout<<"Thank you"<<endl;

            case 1 :
                   int c;
                    
                    {
                        cout<<"0. To display Manager"<<endl;
                        cout<<"1. To display Salesman"<<endl;
                        cout<<"2. To display SalesManager"<<endl;
                        cout<<"Enter Your Designation"<<endl;
                        cin>>c;

                        switch(c)
                        {   case 0:
                                cout<<"Thank you"<<endl;
                            case 1 : 
                            {
                                if(index<5)
                                {

                
                                 arr[index] = new Manager;
                                 arr[index]->accept();
                                //  arr[index]->display();
                                 index++;
                                }
                                else
                                   cout<<"Array is Full...."<<endl;
                                 break;
                            }     

                            case 2:
                            {
                                if(index<5)
                                {
                                 arr[index] = new Salesman;
                                 arr[index]->accept();
                                //  arr[index]->display();
                                 index++;
                                }
                                else
                                cout<<"Array is Full...."<<endl;
                                 break;
                            }     

                            case 3:
                            {
                                if(index<5)
                                {
                                 arr[index] = new SalesManager;
                                 arr[index]->accept();
                                //  arr[index]->display();
                                 index++;
                                }
                                else
                                  cout<<"Array is Full...."<<endl;
                                 break;
                            }
                            default : 
                                cout<<"Wrong Choice"<<endl;        

                        };

                        
                    } while (c != 0);
                break;

            case 2 :
                {
              for (int i = 0; i < index; i++)
              {
                  if(typeid(*arr[i]).name()==typeid(Manager).name())
                  {
                    m++;
                  }
                 else if(typeid(*arr[i]).name()==typeid(Salesman).name())
                  {
                    s++;
                  }
                 else if(typeid(*arr[i]).name()==typeid(SalesManager).name())
                  {
                    sm++;
                  }
            }
            cout<<"number of managers :"<<m<<endl;
            cout<<"number of salesman : "<<s<<endl;
            cout<<"number of salesmanager :"<<sm<<endl;

           cout<<"total number of employees : "<<m+s+sm<<endl;
          }   
            break;

            case 3 :
                
                {
            
            cout<<"*****************************************************"<<endl;//

            cout<<"         information about managers      "<<endl;
            
             int count=0;

             for (int i = 0; i < index; i++)
                 {
                  if(typeid(*arr[i])==typeid(Manager))
                  {
                     arr[i]->display();
                     count++;
                     cout<<"***************************************"<<endl;
                  }
                 }

                if (count==0)
                {
                    cout<<".................THERE ARE NO MANAGERS IN THE COMPANY........................"<<endl;//
                }
                
            }
            break;

            case 4 :
             {

            cout<<"*****************************************************"<<endl;

            cout<<"         information about salesman      "<<endl;

            int count=0;

             for (int i = 0; i < index; i++)
                 {
                  if(typeid(*arr[i])==typeid(Salesman))
                  {
                     arr[i]->display();
                     count++;
                     cout<<"***************************************"<<endl;
                  }
                 }

                if (count==0)
                {
                    cout<<"................THERE ARE NO SALESMAN IN THE COMPANY..........................."<<endl;
                }
            }

                    break;

            case 5 : 
            {
            cout<<"*****************************************************"<<endl;

            cout<<"         information about salesmanagers      "<<endl;

            int count=0;
             for (int i = 0; i < index; i++)
                 {
                  if(typeid(*arr[i])==typeid(SalesManager))
                  {
                     arr[i]->display();
                     count++;
                     cout<<"***************************************"<<endl;
                  }
                 }
                
                if (count==0)
                {
                    cout<<".................THERE ARE NO SALESMANAGERS IN THE COMPANY....................."<<endl;
                }
         }

                    break;

            default :
                    cout<<"Enter a valid choice"<<endl;

                    break;

        }

    }while(choice != 0);

    return 0;
}

























// int main()
// {
//     // Employee *eptr = new Employee();
//     // Employee *eptr = new Manager();
//     // Employee *eptr = new Salesman();
//     Employee *eptr = new SalesManager();
//     eptr->accept(); // Late Binding
//     eptr->display();

//     delete eptr;
//     eptr = NULL;
//     return 0;
// }

// int main1()
// {
//     // Employee obj;
//     // Manager obj;
//     // Salesman obj;
//     SalesManager obj;
//     obj.accept();
//     obj.display();
//     return 0;
// }
