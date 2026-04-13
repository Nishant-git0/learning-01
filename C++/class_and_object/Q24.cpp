/*
Problem (Deep Practice)

Create:

🔹 Base Class: Person
name
age
constructor
displayPerson()
🔹 Derived Class: Employee
salary
constructor
displayEmployee()
🔹 Derived Class: Manager (inherits Employee)
department
displayManager()
*/
#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(string name,int age){
        this->name=name;
        this->age=age;

    }
    void displayperson(){
        cout<<"person name :"<<name<<endl<<"person"<<age<<endl;
    }
};
class Employee : public Person{
    private:
    int salary;
    public:
    Employee(string name,int age,int salary):Person(name,age)
     {
       
   this->salary=salary;
    }
   void displayEmployee(){
    displayperson();
    cout<<"employee salary :"<<salary<<endl;
   }
};
class Manager:public Employee{
    private:
    string department;
    public:
    Manager(string name,int age,int salary,string department):Employee(name,age,salary)
    {
        this->department=department;
    }
    void displayManager(){
        displayEmployee();
        cout<<"Department :"<<department<<endl;
    }
};
int main(){
    string name;
    int age;
    int salary;
    string department;
    cout<<"Enter the name :"<<endl;
    cin>>name;
    cout<<"Enter age :"<<endl;
    cin>>age;
    cout<<"Enter the salary :"<<endl;
    cin>>salary;
    cout<<"Enter the department :"<<endl;
    cin>>department;
    Manager m(name,age,salary,department);
    m.displayManager();
    return 0;
}