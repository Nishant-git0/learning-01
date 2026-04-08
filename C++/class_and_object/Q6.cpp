/*
Question

Write a C++ program to create a class Circle with:

Requirements:
Private data member:
radius
Public functions:
A constructor to initialize radius
setRadius() and getRadius()
A function area() to return area of circle
A function circumference() to return circumference
In main():
Take input from user
Create object using constructor
Display:
Area (rounded to 2 decimal places)
Circumference (rounded to 2 decimal places)
🔹 Bonus (important 🔥)
Make sure radius is not negative
Use C++ professional formatting (setprecision)
🔹 Hint (if you need)
Area = πr²
Circumference = 2πr

*/
#include<iostream>
#include<iomanip>
using namespace std;
class Circle{
    private:
    int Radius;
    public:
    Circle(int r){
        this->setRadius(r);
    }
    void setRadius(int r){
if (r>0)
{
   Radius=r;
}
else{
    Radius=0;
}

    }
    int  getRadius(int r){
        return Radius;
    }
    float area(){
       return 3.14*Radius*Radius;
    }
    float Circumference(){
       return 2*3.14*Radius;
    }
};
int main(){
    int a;
    cout<<"Enter the radius of circle :"<<endl;
    cin>>a;
    Circle c(a);
    cout<<"The area of circle :"<<fixed<<setprecision(2)<<c.area()<<endl;
    cout<<"The Circumference of circle :"<<fixed<<setprecision(4)<<c.Circumference()<<endl;
    
    
    
}