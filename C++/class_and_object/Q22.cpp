/*
Encapsulation Practice Question (Exam Level)

👉 Question: Bank Account System

Create a class BankAccount with the following requirements:

🔒 Data Members (must be private)
accountHolderName
balance
🔓 Member Functions (public)
1. Constructor
Initialize name and balance
2. deposit(int amount)
Add money to balance
Only allow positive amount
3. withdraw(int amount)
Deduct money from balance
Conditions:
Amount must be positive
Cannot withdraw more than balance
4. getBalance()
Return current balance
5. display()

Print:

Name: Nishant
Balance: 5000
⚠️ Rules (Important)

❌ You CANNOT access balance directly in main()
✅ All operations must go through functions

🧠 What This Tests
Encapsulation (private data)
Controlled access (validation)
Real-world thinking
*/
#include<iostream>
using namespace std;
class Bankaccount{
private:
string accountholdername;
int balance;
public:
Bankaccount(string name,int b ){
    accountholdername = name;
    balance = b;

}
void setaccountholdername(string name){
accountholdername = name;
}
string getaccountholdername(){
return accountholdername;
}
void setbalance(int b){
if(b>0){
    balance = b;
}
else{
balance = 0;
}
}
int getbalance(){
    return balance;
}
int deposit(int deposit){
    return balance = balance + deposit;
}
int withdraw(int withdraw){
    return balance = balance - withdraw;
}
void setwithdraw(int withdraw){
if(balance < withdraw){
    this->withdraw (withdraw);
}
else{
    withdraw = 0;
}
}
int getwithdraw(){
    return 0;
}


void display(){
    cout<<"the balance is :"<<balance<<endl;
}
};
int main(){
    string name;
    int b;
    int deposit;
    int withdrawamount;
    cout<<"enter the name of account holder name :"<<endl;
    cin>>name;
    cout<<"Enter the balance :"<<endl;
    cin>>b;
    cout<<"Enter the deposit amount :"<<endl;
    cin>>deposit;
    cout<<"Enter the withdrawal amount :"<<endl;
    cin>>withdrawamount;
    Bankaccount b1(name,b);
    b1.display();
    cout<<"The deposit amount is :"<<deposit<<endl<<"the balance after deposit "<<b1.deposit(deposit)<<endl;
    cout<<"The withdrawal amount is :"<<withdrawamount<<endl<<"The balance after withdrawal :"<<b1.withdraw(withdrawamount)<<endl;
    return 0;

}