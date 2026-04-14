/*
Create:

Class A
function: showA()
Class B
function: showB()
Class C (inherits A and B)
function: showC()
In main():
Create object of C
Call all functions
*/
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    A(int a){
        this->a=a;
    }
    void display(){
        cout<<"print value of  a : "<<a<<endl;
    }
};
class B{
    private:
    int b;
    public:
    B(int b){
this->b=b;
    }
    void display(){
        cout<<"print value of b : "<<b<<endl;
    }
};
class C:public A, public B{
    private:
    int c;
    public:
    C(int a,int b,int c):A(a),B(b){
        this->c=c;

    }
    void display(){
        cout<<"print value of c : "<<c<<endl;
    }
};
int main(){
int a,b,c;
cout<<"Enter value for a :"<<endl;
cin>>a;
cout<<"Enter value for b : "<<endl;
cin>>b;
cout<<"Enter value for c : "<<endl;
cin>>c;
C d(a,b,c);
d.C::display();
d.B::display();
d.A::display();
}