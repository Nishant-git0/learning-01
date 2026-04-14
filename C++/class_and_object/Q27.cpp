/*
Payment System Design

You are building a payment system.

Step 1: Create an abstract class
Class: Payment
pure virtual function:
processPayment()
Step 2: Create derived classes
1. UPIPayment
has data: amount
implements processPayment()
prints: "Processing UPI payment of X"
2. CardPayment
has data: amount
implements processPayment()
prints: "Processing Card payment of X"
Step 3: Use polymorphism in main()
Create Payment* ptr
Point it to:
UPI object
Card object
Call processPayment() both times
*/
#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void processPayment()=0;
};
class Upipayment:public Payment{
    private:
    int amount1;
    public:
    Upipayment(int amount1 ){
        this->amount1=amount1;
    }
    void processPayment() override {
   cout<<"processing card payment of x : "<<amount1<<endl;
    }
};
class CardPayment:public Payment{
    private:
    int amount2;
    public:
    CardPayment(int amount2){
        this->amount2=amount2;
    }
    void processPayment()override{
        cout<<"processing card payment of X : "<<amount2<<endl;
    }
};
int main(){
    int amount1,amount2;
    cout<<"Enter the amount : "<<endl;
    cin>>amount1;
    cout<<"Enter the amount : "<<endl;
    cin>>amount2;
    Payment* ptr;
    Upipayment u(amount1);
    CardPayment c(amount2);
    ptr =&u;
    ptr->processPayment();
    ptr = &c;
    ptr->processPayment();
    return 0;

}