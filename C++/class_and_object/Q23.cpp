/*
Single Inheritance

👉 Question: Employee System

Create a class Employee:

name (private)
salary (private)

Functions:

Constructor
displayEmployee()

Create a class Manager that inherits Employee:

department
displayManager()

👉 In main():

Create Manager object
Show all details
*/

#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int salary;
    public:
    Employee(string name,int salary){
        this->name=name;
        this->salary=salary;

    }
    void displayEmployee(){
    cout<<"Employee name :"<<name<<endl<<"salary"<<salary<<endl;
    }
};
class Manager:public Employee{
    string department;
    public:
    Manager(string name,int salary,string department)
    :Employee(name,salary)
    {
       this->department=department;
    }
    void display(){
        displayEmployee();
        cout<<"department :"<<department<<endl;
    }
};
int main(){
    string s;
    int b;
    string depart;
    cin>>s>>b>>depart;
    Manager m1(s,b,depart);
    m1.display();
    return 0;
}