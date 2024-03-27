/*Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]*/

#include <iostream>
using namespace std;

class Product{
    int id;
    string title;
    double price;

    public:
        virtual void accept(){
            cout<<"Enter id - "<<endl;
            cin>>id;
            cout<<"Enter Title - "<<endl;
            cin>>title;
            cout<<"Enter Price - "<<endl;
            cin>>price;

        }
        virtual void display(){
            cout<<"The id is : "<<id<<endl;
            cout<<"The Title is : "<<title<<endl;
            cout<<"The Price is : "<<price<<endl;

        } 
        void setPrice(double price){
            this->price = price;
        }
        double getPrice(){
            return price;
        }

};

class Book : public Product{
    string author;

    public:
        void accept(){
            cout<<"Enter author - "<<endl;
            cin>>author; 

            Product::accept();                         
                                                        
              setPrice(getPrice() -(getPrice()*0.1));    
        }
        
        void display(){
            cout<<"The author is : "<<author<<endl;
            Product::display();

          }
        

        
};

class Tape : public Product{
    string artist;

    public:
        void accept(){
            cout<<"Enter artist - "<<endl;
            cin>>artist;
            Product::accept();

            setPrice(getPrice()-(getPrice()*0.05));
        }
        

        void display(){
            cout<<"The artist is : "<<artist<<endl;
            Product::display();

        }
};

int main(){
    Product *arr[3];
    int choice;
    int index =0;
    Book b;
    Tape t;

     do
    {
        cout << "0. Exit" << endl;
        cout << "1. To Buy a Book" << endl;
        cout << "2. To Buy a Tape" << endl;
        cout << "3. To Calculate Total"<<endl;
        cout << "4. To see all list Details" << endl;
        cout << "Enter choice - ";
        cin >> choice;

        switch(choice){
        case 0:
            cout << "Thank You.." << endl;
            break;
        case 1:
            if (index < 3)
            {
                arr[index] = new Book();
                arr[index]->accept();
                index++;
            }
            else
                cout << "list is full" << endl;
            break;
        case 2:
            if (index < 3)
            {
                arr[index] = new Tape();
                arr[index]->accept();
                index++;
            }
            else
                cout << "list is full" << endl;
            break;
        case 3:
            {
                double total = 0;
                for (int i = 0; i < index; i++)
                {
                    total = total + arr[i]->getPrice();
                }

                cout<<"total is : "<<total;
            }
            break;

        case 4:
            for (int i = 0; i < index; i++)
              {  arr[i]->display();
                cout<<endl;
              } 
            break;

        default:
            cout << "Wrong choice.." << endl;
            break;
        }
    } while (choice != 0);

    for (int i = 0; i < index; i++)
    {
        delete arr[i];
        arr[i] = NULL;
    }


    return 0;
}
