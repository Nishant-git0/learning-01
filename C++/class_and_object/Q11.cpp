#include<iostream>
using namespace std;
class Student{
    public:
    static int count;
    Student(){
        count++;
    }
};
int Student::count=0;
int main(){
    Student s1,s2,s3,s4;
    cout<<"Total student :"<<Student::count<<endl;
    return 0;
}