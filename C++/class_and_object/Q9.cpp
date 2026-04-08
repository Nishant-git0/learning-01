#include<iostream>
using namespace std;
class B;
class C;
class A{
    private:
    int a;
    public:
    A(int x){
        a=x;
    }
    friend int findmax(A,B,C,int);
};
class B{
private:
int b;
public:
B(int y){
    b=y;

}
friend int findmax(A,B,C,int);

};
class C{
    private:
    int c;
    public:
    C(int z){
        c=z;
    }
    friend int findmax(A,B,C,int);
};
int findmax(A ob1,B obj2, C obj3,int d){
    int max=ob1.a;
    if(obj2.b > max)
    max=obj2.b;
    if(obj3.c > max)
    max=obj3.c;
    if( d > max)
    max=d;
    return max;
}
int main(){
    int x;
    int y;
    int z;
    int d;
cout<<"enter for x:"<<endl;
cin>>x;
cout<<"enter y:"<<endl;
cin>>y;
cout<<"enter for z:"<<endl;
cin>>z;
cout<<"eneter for D;"<<endl;
cin>>d;

    A obj1(x);
    B obj2(y);
    C obj3(z);
   // int d=10;
    cout<<"maximum:"<<findmax(obj1,obj2,obj3,d);
    return 0;
}
