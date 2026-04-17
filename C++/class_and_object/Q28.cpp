/*
Mini Project: Smart Banking & Payment System
🟢 Problem Statement

You are designing a Smart Financial System that supports different types of users and payment methods.

🧱 Step 1: Base Class (Abstraction Layer)

Create an abstract class:

class Payment
protected:
double amount
Constructor to initialize amount
Pure virtual function:
processPayment()

👉 This ensures every payment type must implement its own logic.

🧱 Step 2: Derived Payment Types (Inheritance + Polymorphism)

Create these classes:

1. UPIPayment
Extra data:
string upiId
Implements:
processPayment()

Output:

Processing UPI Payment of X using UPI ID: Y
2. CardPayment
Extra data:
string cardNumber

Implements:

Processing Card Payment of X using Card: Y
3. NetBankingPayment
Extra data:
string bankName

Implements:

Processing NetBanking Payment of X via Bank: Y
🧱 Step 3: User System (Encapsulation + Composition)

Create a class:

class User
private:
string name
double balance
Constructor to initialize values
Functions:
makePayment(Payment* payment)
Calls payment->processPayment()
Deduct amount from balance
addMoney(double amount)
showBalance()
🧱 Step 4: System Behavior (MAIN FUNCTION)

In main():

Create a user:
Name: anything
Balance: 5000
Add money
Create different payment objects:
UPI Payment
Card Payment
NetBanking Payment

Use same function:

user.makePayment(payment);
🔥 Expected Concepts You Must Use

✔ Classes & Objects
✔ Encapsulation
✔ Constructors
✔ Inheritance (3 levels of derived classes)
✔ Runtime Polymorphism (base pointer)
✔ Abstract class
✔ Dynamic behavior (same function, different output)
*/    
#include<iostream>
using namespace std;
class Payment{
    protected:
    double amount;
    public:
    Payment(double amount ){
        this->amount=amount;
    }
    virtual void ProcessPayment()=0;

};
class UpiPayment:public Payment{
    protected:
    string upiId;
    public:
    UpiPayment(double amount,string upiId):Payment(amount){
     this->upiId=upiId;
    }
    void ProcessPayment(){
                cout<<"Processing upi payment of x using upiId : "<<upiId<<endl;

    }
};
class CardPayment:Payment{
    protected:
    string cardid;
    public:
    CardPayment(string cardid,double amount):Payment(amount){
        this->cardid=cardid;
    }
void ProcessPayment(){
    cout<<"Processing Card Payment of X using Card: "<<cardid<<endl;
}
};
class NetBankingPayment:public Payment{
    protected:
    string bankName;
    public:
    NetBankingPayment(string bankName,double amount):Payment(amount){
        this->bankName=bankName;
    }
    void ProcessPayement(){
        cout<<"Processing NetBanking Payment of X via Bank: "<<bankName<<endl;
    }
};
class User:public Payment,public NetBankingPayment,public CardPayment,public UpiPayment{
    private:
    string name;
    double balance;
    public:
    User(string name,double balance,double amount, string bankName,string cardid,double amoun,double amount,string upiId):
    Payment(amount ),
     UpiPayment(amount,upiId),
      CardPayment(cardid,amount),
      NetBankingPayment(bankName, amount)
    {
        this->name=name;
        this->balance=balance;
    }
    int makePayment(int Payment){
        balance=+Payment;
    }
};