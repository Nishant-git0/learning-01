#include<iostream>
using namespace std;
class Student{
    private:
    int lenght;
    int breadth;
    public:
    Student(int a,int b){
        lenght = a;
        breadth = b;

    }
    void setlenght(int a){
        if(a>0)
        a=lenght;
        else 
        a=0;
    }
    int getlenght(){
        return lenght;
    }
    void setbreadth(int b){
        if(b>0)
        b=breadth;
        else
        breadth;
    }
    int getbreadth(){
        return breadth;
    }
    int add(){
        return lenght+breadth;
    }
    float add(float lenght,float breadth){
        return (lenght+breadth);
    }
    void display(){
        cout<<"the sum of number :"<<add()<<endl;

    }
};
int main(){
    int a;
    int b;
    cout<<"enter value for lenght:"<<endl;
    cout<<"enter value for breadth :"<<endl;

    cin>>a>>b;
    Student s1(a,b);
    s1.display();
}