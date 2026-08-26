#include<iostream>
using namespace std ;

class Volume
{
    private:

    double length;
    double width;
    double height;

    public:

    Volume( ){
         this->length =2.3 ;
         this->width = 1.2;
         this->height = 1.0;
    }
    
    Volume(double  value){
         this->length =value ;
         this->width = value;
         this->height = value;
    }

    Volume(double length, double width, double height ){
         this->length =length ;
         this->width = width;
         this->height =height ;
    }

    void calculateValue(){

        cout<<"Valume is :"<<length*width*height<<endl;
    }

};


int getChoice(){
    cout<<"Enter 1  to Calculate Volume with default values : " <<endl;
    cout<<"Enter 2 to  Calculate Volume with length,breadth and height with same value : "<<endl;
    cout<<"Enter 3 to Calculate Volume with different length,breadth and height values : "<<endl;
    cout<<"Enter 0  for exit "<<endl;
    int choice;
    cout<<"Enter choice ";
    cin>>choice;
    return choice;
}
int main(){

    int ch = 0;
   
    while((ch=getChoice())!=0){
        switch(ch){
            case 1:
            {
                Volume v1;
                v1.calculateValue();
                break;
            }
            case 2:
                {
                double value;
                cout<<"Enter value"<<endl;
                cin>>value;
                Volume v2(value);
                v2.calculateValue();
                break;
                }
            case 3:{
                double length;
                double width;
                double height;

                cout<<"length : "<<endl;
                cin>>length;
                
                cout<<"width : "<<endl;
                cin>>width;

                cout<<"height : "<<endl;
                cin>>height;

                
                Volume v3(length,  width,  height);
                v3.calculateValue();
                break;
            }
            default:
                cout<<"Enter valid value : "; 
    }
 }
    return 0;
}