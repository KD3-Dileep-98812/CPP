#include<iostream>

using namespace std;

class Time {

    private:

    int h;
    int m;
    int s;

    public :
    Time(): h(00),m(00),s(00){}
    Time(int h , int m , int s) : h(h), m(m), s(s){}
    int getHour(){
        return h;
    }
    int getMinute(){
        return m;
    }
    int getSecond(){
        return s;
    }


     void printTime(){

        cout<<"time is : "<<h<<":"<<m<<":"<<s<<endl;
    }

    void setHour( int h){
        this->h = h;
    }
    void setMinute( int m){
        this->m = m;
    }
    void setSecond( int s){
        this->s = s;
    }

    
    void accept(){
    
        cout << "Enter hour: ";
        cin >> h;

        cout << "Enter minute: ";
        cin >> m;

        cout << "Enter second: ";
        cin >> s;
    

    }
};


int getchoice(){

    int choice;

    cout<<"Enter the choice 1 for Add time: "<<endl;
    cout<<"Enter the choice 2 to display all time: "<<endl;
    cout<<"Enter the choice 3 for Display only hrs of all time objects: "<<endl;
    cout<<"Enter the choice 0 for exit : "<<endl;
    cin>>choice;
    return choice;
}
int main(){
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    Time *t1 = new Time[n];
    int ch = 0;
    while((ch=getchoice())!=0){
        switch(ch){
            case 1:{
                 for (int i = 0; i < n; i++) {
                    t1[i].accept();
                }              
                break;
            }
            case 2:{
                for(int i= 0;i<n;i++){
                    t1[i].printTime();
                }               
                break;
            }
            case 3:{
                for(int i=0;i<n;i++){
                    cout << t1[i].getHour() << endl;
                }
                break;
            }
            default:
                cout<<"Enter the valid choice : ";
        }
    }
    delete[] t1;
    return 0;
}