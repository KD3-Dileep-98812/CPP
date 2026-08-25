#include<iostream> 
using namespace std; 

class Date
{   
private:
    int day;
    int month;
    int year;
public :
    void initDate(){
       int day = 00;
       int month =00;
       int year = 0000;
        
    }
    void acceptDate(){
        cout<<"Enter a day:"<<endl;
        cin>>day;
        cout<<"Enter a month : "<<endl;
        cin>>month;
        cout<<"Enter a year :"<<endl;
        cin>>year;
    }
    
    void printDate(){
        cout<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
        
    }

    bool isLeapYear(){
        if((year%4==0 && year%100!=0)|| year%400 ==0){
            return true;
        }
        else return false;
    }

};

int getChoice(){
    cout<<"Enter 1  for init data "<<endl;
    cout<<"Enter 2 for accept data "<<endl;
    cout<<"Enter 3 for print data "<<endl;
    cout<<"Enter 4 to check for leap year "<<endl;
    cout<<"Enter 0  for exit "<<endl;
    int choice;
    cout<<"Enter choice ";
    cin>>choice;
    return choice;

}

int main()
{
    int ch;
    Date date;
    while((ch=getChoice())!=0){
        switch(ch){
            case 1:
                date.initDate();
                break;
            case 2:
                date.acceptDate();
                break;
            case 3:
                date.printDate();
                break;
            case 4:
                if(date.isLeapYear()){
                    cout<<"leap year"<<endl;
                }
                else {
                    cout<<"not a leap year"<<endl;
                }
               
                break;
            default:
                break;
                


        }
           
    }
    
    
    
    return 0;
};
