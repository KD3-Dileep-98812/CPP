//   according to sir this is day5_4.cpp


#include<iostream>
using namespace std;
/*
                                                        Assignment 5 
                                                        
Q1. Create a class Date with data memebrs day,month and year. 
Cretae a class Person with data members name,address and birthdate. The birthdate should be of 
type Date. 
Create a class Student with data members id, marks, course and joining date, end date. The joining 
date and end date should be of type date. 
Implement above classes. Test all functionalities in main(). 
(Note - Only Perform the Association in the above case. No need of Inheritance)


*/


class Date{

    public : 

    int day;
    int month;
    int year;

    public :
    Date() : day(00), month(00), year(0000){}
    Date(int day,int month, int year): day(day), month(month), year(year){}

    void accept(){
        cout<<"day : ";
        cin>>day;
        cout<<"month : ";
        cin>>month;
        cout<<"year : ";
        cin>>year;
    }
    void display(void){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Person{

    private : 
        string name;
        string address;
        Date birthdate;

    public :

        Person(): name(" "), address(" "),birthdate(00,00,00){}
        Person(string name, string address, int day, int month, int year): name(name),address(address), birthdate(day, month,year)
        {}

    void acceptRecord(){
        cout<<"Name : ";
        cin>>name;
        cout<<"Address";
        cin>>address;
        cout<<"Birthdate"<<endl;
        this->birthdate.accept();

    }

    void printRecord(){
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Birthdate : "<<endl;
        this->birthdate.display();
        
    }

};

class Student{

    private :
    
        int id;
        double marks;
        string course;
        Date joinDate;
        Date endDate;

    public :

        Student() : id(0),marks(0.0),course(" "),joinDate(00,00,00), endDate(00,00,00)  {}

        Student(int id,double marks,string course,int day, int month, int year, int day1, int month1, int year1 ) : id(id) ,marks(marks),course(course),joinDate (day, month , year), endDate(day1, month1 , year1) {}


   

    void acceptRecord(){
        cout<<"Course : ";
        cin>>course;
        cout<<"Id: ";
        cin>>id;
        cout<<"Marks : ";
        cin>>marks;
        cout<<"JoinDate"<<endl;
        this->joinDate.accept();
        cout<<"endDate"<<endl;
        this->endDate.accept();
    }

    void printRecord(){

        cout<<"Students details are as folows : "<<endl;

        cout<<"Course : "<<course<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"joindate : "<<endl;
        this->joinDate.display();//this->joinDate.display()<<endl;--> why error is coming bu giving endl?
        cout<<"endDate"<<endl;
        this->endDate.display();
        cout<<endl;
    }

    };

int main(){


Date d1;

    // p1.acceptRecord();
    // p1.printRecord();
    // s1.acceptRecord();
    // s1.printRecord();
    // d1.accept();
    // d1.display();
    // Person p1;
    // Student s1(2,256.6,"btech",10,07,2005, 12,07,2010);
    // s1.printRecord();
    // Date d1(10,07,2003);
    // d1.display();
    Person p1("dileep","belav",10,07,2004);
    p1.printRecord();
    return 0;
}