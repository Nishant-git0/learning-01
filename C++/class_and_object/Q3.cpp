#include<iostream>
using namespace std;
class Rectangle{
private:
int length;
int breadth;
public:
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
    cout<<"Enter the number for l"<<endl;
    cin>>l;
    cout<<"Enter the number for b"<<endl;
    cin>>b;
    Rectangle r(l,b);
    cout<<"area :"<<r.area()<<endl;
}