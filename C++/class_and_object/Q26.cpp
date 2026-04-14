/*
Create:
Class Shape
virtual function draw()
Class Circle (inherits Shape)
override draw()
Class Rectangle
override draw()
*/
#include<iostream>
using namespace std;
class Shape{
   // private:
//int a;
public:
//Shape(int a){
    // this->a=a;
   //  }
virtual void display()=0;
};
class Rectangle : public Shape{
    private:
    int b;
    public:
    Rectangle(int b){
    this->b=b;
    }
    void display() override{
     cout<<"print Rectangle : "<<b<<endl;
    }
};
class Circle : public Shape{
private: 
int c;
public:
Circle(int c){
    this->c=c;
}
void display() override {
    cout<<"print circle : "<<c<<endl;
}
};
int main(){
    int b,c;
   // cout<<"enter value for a :"<<endl;
    //cin>>a;
    cout<<"Enter value for b : "<<endl;
    cin>>b;
    cout<<"Enter value for c : "<<endl;
    cin>>c;
    Shape* ptr;
    Rectangle r(b);
    Circle d(c);
    ptr =&r;
    ptr->display();
    ptr = &d;
    ptr->display();
}