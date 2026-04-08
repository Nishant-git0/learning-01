/*
using setter and getter along with constructor 
*/
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int Length;
    int Breadth;

    public:
    Rectangle(int l,int b){
       this-> setLenght(l);
        this->setBreadth(b); 

    }
    void setLenght(int l){
        if (l>0)
        {
          Length=l;
        }
        else{
            Length=0;
        }

    }
    void setBreadth(int b){
        if (b>0)
        {
             Breadth=b;
        }
        else{
             Breadth=0;
        }
        
    }
    int getLenght(){
        return Length;

    }
    int getBreadth(){
        return Breadth;
    }
    int area(){
        return Length*Breadth;
    }
    float circumference(){
        return (2*(Length+Breadth));
    }
};
int main(){
    int a,b;
    cout<<"Enter the number Lenght:"<<endl;
    cin>>a;
    cout<<"Enter the number for breadth:"<<endl;
    cin>>b;
    Rectangle r(a,b);
    cout<<"Area:"<<r.area()<<endl;
    cout<<"Circumference:"<<r.circumference()<<endl;

}