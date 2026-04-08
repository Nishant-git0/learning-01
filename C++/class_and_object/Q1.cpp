/*
Create a class Student:

Data: age
Constructor: initialize age
Print age in main

 Example:

Input: 20  
Output: 20*/

#include<iostream>
using namespace std;
class Student{
public:
int age;
Student(int x){
this->age=x;
}

};
int main(){ 
    int x;
       cin>>x;

    Student s(x);
   cout<<s.age;

}