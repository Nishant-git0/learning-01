#include<iostream>
using namespace std;
class Student{
    private:
    int  name;
    int age;
    public:
   Student(int a,int b){
    name=a;
    age=b;

   }
   int add(int a,int b){
    return a+b;
   }
   int add(){
    return name + age;
   }
};
int main(){
    Student s1(4,5);
    cout<<"display :"<<s1.add(40,50)<<endl;
    cout<<"display :"<< s1.add()<<endl;
    return 0;
}