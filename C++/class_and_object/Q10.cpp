#include<iostream>
using namespace std;
class B;
class A{
private:
int a;
public:
A(int x){
    a=x;
}
friend int Add(A,B);

};
class B{
private:
int b;
public:
B(int y){
    b=y;
}
friend int Add(A,B);
};
int Add(A obj1,B obj2){
    return obj1.a+obj2.b;

}
int main(){
    int x,y;
    cout<<"enter for X:"<<endl;
    cin>>x;
    cout<<"enter for y:"<< endl;
    cin>>y;
    A objA(x);
    B objB(y);
    int result=Add(objA,objB);
    cout<<"sum="<<result<<endl;
    return 0;
}