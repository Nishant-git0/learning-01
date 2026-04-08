/*
using getter and setter for same program using private: specifier 
*/
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;

    public:
    void setlenght(int l){
        if(l>0)
        
        this->length=l;
        else
        this->length=0;
    }
    int getlength(){
        return length;
    }
    void setbreadth(int b){
        if (b>0)
        {
            this->breadth=b;
        }
        else{
            this->breadth=0;
        }
    }
        int getbreadth(){
            return breadth;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return (2*(length+breadth));
        }
    
};
int main(){
    int length,breadth;
    cout<<"Enter the value of a:"<<endl;
    cin>>length;
    cout<<"Enter the value of b:"<<endl;
    cin>>breadth;
    Rectangle r;
    r.setlenght(length);
    r.setbreadth(breadth);
    cout<<"The value of area:"<<r.area()<<endl;
    cout<<"The value of perimeter is:"<<r.perimeter()<<endl;
}

