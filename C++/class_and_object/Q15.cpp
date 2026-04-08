#include<iostream>
using namespace std;

class Student {
public:
    int age;

public:
    // Parameterized constructor
    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;
        cout << "Copy constructor called\n";
    }

   // void display() {
      //  cout << "Age: " << age << endl;
  //  }
};

int main() {
    Student s1(20);     // Calls parameterized constructor
    Student s2 = s1;    // Calls copy constructor

   // s2.display();
   cout<<s2.age;
}