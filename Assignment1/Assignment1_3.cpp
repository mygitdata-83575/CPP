#include<iostream>
using namespace std;

class Student{
    private:
    int rollno;
    string name;
    double marks;

    public:
    void initStudent(){
        rollno = 34,name = "Rahul",marks = 84.53;
        cout<<"Roll no = "<<rollno <<"Name = "<<name<<"marks ="<<marks<<endl;

    }
    void acceptStudentFromConsole(){
        cout<<"Enter Rollno,Name,Marks of Student"<<endl;
        cin>>rollno>>name>>marks;
                               
    }
    void printStudentOnConsole(){
        cout<<"Rollno ="<<rollno<<"Name = "<<name<<"Marks"<<marks<<endl;
    }
   

};

int main(){
    int choice;
    Student s;

    do{
        cout<<"0.Exit"<<endl;
        cout<<"1.Init Student"<<endl;
        cout<<"2.Accept Student"<<endl;
        cout<<"3.Print Student"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 0:
            cout<<"Welcome Back"<<endl;
            break;

            case 1:
            s.initStudent();
            break;

            case 2:
            s.acceptStudentFromConsole();
            break;

            case 3:
            s.printStudentOnConsole();
            break;

            default:
            cout<<"Wrong Selection"<<endl;
        }


    }while(choice!=0);

    return 0;
}