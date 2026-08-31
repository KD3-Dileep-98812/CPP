#include<iostream>
using namespace std;


/*
Assignment 6 
Q1. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class 
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books. 
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program 
should be menu driven and should not cause memory leakage. 
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]
*/

class Product{
    protected:
        int id ;
        string title;
        double price;
        double sellPrice;
    public:
        Product() : id(0), title(" "), price(0.0){}
        Product(int id , string title , double price ) : id(id), title(title), price(price){}

        virtual void acceptRecord(){}// vittual 
        virtual double sellAmount() = 0;// pure virtual


        
};
class Book : public Product{     // inheritance 

    private :
        string auther;
    public :
        Book(): auther(" ")
        {}
        Book(string auther )  : auther(auther){}

    void acceptRecord(){

            cout<<"Id :";
            cin>>id ;
            cout<<"Title :";
            cin>>title;
            cout<<"Price : ";
            cin>>price;
            cout<<"Auther  : ";
            cin>>auther;
    }
    double amount ;
    double sellAmount(){
     this->sellPrice=price*0.9;//  note => function name and varible must be different ....  2 times mistakes..
     return sellPrice;
    }
};
class Tape  : public Product{     //  inheritance 

    private: 
        string artist;
    public:
        Tape(): artist(" "){}
        Tape(string artist): artist(artist){}
    
    void acceptRecord(){

            cout<<"Id :";
            cin>>id ;
            cout<<"Title :";
            cin>>title;
            cout<<"Price : ";
            cin>>price;
            cout<<"Artist  : ";
            cin>>artist;
    }
    double sellAmount(){
        this->sellPrice= price*0.95;
        return sellPrice;
    }

};

int menu(){
    int choice ;
    cout<<"Enter choice : "<<endl;
    cout<<"1. Book :"<<endl;
    cout<<"2. Tape :"<<endl;
    cin>>choice;
    return choice;

}


int main(){

    Product *ptr[3];

    for(int i = 0; i<3;i++){
        int ch = menu();
        switch (ch)
        {
        case 1:
            ptr[i]= new Book;
            ptr[i]-> acceptRecord();
            break;
        case 2:
            ptr[i]= new Tape;
            ptr[i]-> acceptRecord();
            break;
        
        default:
            cout<<"Enter the Valid choice :";
        }
    }
    double amount = 0;

    // print the price 
    for( int i = 0;i<3;i++){
        amount +=ptr[i]-> sellAmount();
    }

    cout<<"Total amount is : "<<amount;
// free the momory 
    for( int i = 0;i<3;i++){
        delete ptr[i];
        ptr[i]= nullptr;
    }

    return 0;
}