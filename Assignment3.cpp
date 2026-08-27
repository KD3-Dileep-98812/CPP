#include<iostream>
using namespace std ;

class Cylinder{

    private :
        double radius;
        double height;
        static double pi;// static pi
        

    public :
        Cylinder()   : radius(0),height(0)
        { }

        Cylinder(double radius , double height )   : radius(radius),height(height)
        { }

    void setRadius(double radius){
        this->radius = radius;
    }
    double getRadius(){
        return radius;
    }
    void setHeight(double height){
        this->height = height;
    }
    double getHeight(){
        return height;
    }

    void CaluculateVol(){     

        cout<<"Volume of culinder is : "<<pi*radius*radius*height;
    }
    
    

};

// global init
double Cylinder::pi = 3.14;

int main(){
    Cylinder c1;
    c1.setRadius(3);
    c1.getRadius();
    c1.setHeight(10);
    c1.getHeight();
    c1.CaluculateVol();
   
    return 0;

}