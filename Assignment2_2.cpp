#include<iostream>
using namespace std ;

class Tollbbooth{
    private:
        unsigned int payCar;
        unsigned int noPayCar;
        double totalMoney;
    public :


        Tollbbooth() : payCar(0),noPayCar(0){}

        Tollbbooth(unsigned int payCar,unsigned int noPayCar) : payCar(payCar),noPayCar(noPayCar){}


        void payingCar(){

            payCar++;
            totalMoney += 0.5;
        }
        void nopayCar() {
            payCar++;

        }

        void printConsole(){

            cout<<"payingCar: "<<payCar<<endl;
            cout<<"nopayCar: "<<noPayCar<<endl;
            cout<<"payingCar: "<<totalMoney;

        }
        
};
int main(){ 
        Tollbbooth t;
        t.payingCar();
        t.nopayCar();
        t.printConsole();

    return 0;

}