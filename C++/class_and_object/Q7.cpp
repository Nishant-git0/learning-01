/*
Write a C++ program to create a class Account that represents a bank account.

🔸 Requirements:
1. Private data members:
accountNumber
balance
2. Public member functions:
Constructor
Initialize account number and balance
deposit(int amount)
Add amount to balance
Only allow if amount > 0
withdraw(int amount)
Subtract amount from balance
Only allow if:
amount > 0
balance is sufficient
getBalance()
Return current balance
3. In main():
Take input:
account number
initial balance
Create object using constructor
Perform:
deposit
withdraw
Display final balance
🔹 Bonus 
Prevent negative balance
Print output using:
fixed << setprecision(2)
🔹 Hint 
if(amount > balance){
    cout << "Insufficient balance";
}
*/
#include<iostream>
using namespace std;
class Bank{
    private:
    int Accountnumber;
    int Balance;
    public:
    int deposit;
    int withdraw;
    Bank(int a,int b, int c,int d){
     this->setAccountnumber(a);
     this->setBalance(b);
     this->setdeposit(c);
     this->setwithdraw(d);

    }
    void setAccountnumber(int a){
        if (a>0)
        {
            Accountnumber=a;
        }
        else{
            Accountnumber=0;
        }
        
    }
    void setBalance(int b){
        if (b>0)
        {
            Balance=b;
        }
        else{
            Balance=0;
        }

    }
    void setdeposit(int c){
     if (c>0)
     {
        deposit=c;
     }
     else{
        deposit=0;
     }
    }
    void setwithdraw(int d){
      if (d>0)
      {
       withdraw=d;
      }
      else{
        withdraw=0;
      }
      
    }
    int getAccountnumber(int a){
     return Accountnumber;
    }
    int getBalance(int b){
        return Balance;
    }
    int getdeposit(int c){
        return deposit;
    }
    int getwithdraw(int d){
     return withdraw;
    }
    int Accountnumber(){
        return Accountnumber;
    }
    int Balance(){
        return Balance;
    }
    int deposit(){
        return deposit= Balance+deposit;
    }
    int withdraw(){
        return withdraw=Balance-withdraw;
    }
};
int main(){
    int a,b,c,d;
    cout<<"Enter the account number :"<<endl;
    cin>>a;
    cout<<"Enter the Balance :"<<endl;
    cin>>b;
    cout<<"Enter the deposit amount :"<<endl;
    cin>>c;
    cout<<"Enter the withdrawal amount:"<<endl;
    cin>>d;
    Bank r(a,b,c,d);
   cout<<"Account number: "<<r.Accountnumber()<<endl;
   cout<<"Balance:"<<r.Balance()<<endl;
   cout<<"deposit:"<<r.deposit()<<endl;
   cout<<"withdraw:"<<r.withdraw()<<endl;

}