/*
Question 2 (Rectangle – slightly deeper)
🔹 Problem

Create a class Rectangle:

Data:
length
width
Constructor:
Initialize both values
Function:
Create a function area() that prints:
Area = length × width
🔹 What you must do

In main():

Take input for:
length
width
Create object using constructor
Call function to print area
🔥 Example
Input:
5 10

Output:
Area = 50
*/
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
   // int area;
    
    Rectangle(int a,int b){
        this->length=a;
        this->breadth=b;

    }
    int area(){
        return length*breadth;
    }
};
int main(){
    int l,b;
    cout<<"enter the value of l"<<endl;
    cin>>l;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    Rectangle r(l,b);
    cout<<"Area"<<r.area()<<endl;
}