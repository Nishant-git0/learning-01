/*
Practice Question (Exam Level)
👉 Question: Student Result System

Create a class Student with the following requirements:

🔹 Data Members:
name → private
marks → private
🔹 Functions:
Constructor
Takes name and marks as input
Initializes the data members
Public Functions
display() → prints name and marks
isPass() → returns:
"Pass" if marks ≥ 40
"Fail" if marks < 40
*/
#include<iostream>
using namespace std;

class Studend{
    private:
    string name;
    int marks;
    public:
    Studend(string a,int b){
        name = a;
        marks = b;

    }
    void getname(string a){
        name = a;
    }
    string getname(){
        return name;
    }
    void getmarks(int b){
      if(b>=40 && b < 100)
      marks = b;
      else 
       marks = 0;
    }
   int display(int b){
    if ( b >=40 && b< 100 )
    {
        cout<<"congrat :"<<name<<"you got :"<<b<<endl;
    }
    else{
        cout<<"i am sorry :"<<name<<"you got :"<<b<<endl;
    }
    
   }

};
int main(){
    string name;
    int b;
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Enter your marks :"<<endl;
    cin>>b;
    Studend s1(name,b);
    s1.display(b);
    cout<<s1.display(b)<<endl;
  return 0;
}