#include<iostream>
using namespace std;
class Student{
private:
int Length;
int Breadth;
public:
Student(int a,int b){
    Length = a;
    Breadth = b;
}
void getLength(int a){
if(a>0)
Length = a;
else
Length = 0;
}
int setLength(){
    return Length;
}
void setBreadth(int b){
    if(b>0)
    Breadth = b;
    else
    Breadth = 0;
}

int get(){
    return Breadth;
}
 int Add();
};
int Student:: Add(){
    return Length + Breadth;
}
int main(){
int a,b;
cout<<"Enter for lenght:"<<endl;
cin>>a;
cout<<"Enter for breadth:"<<endl;
cin>>b;
Student s1(a,b);
cout<<"the sum of two number is = "<<s1.Add()<<endl;
return 0;
}