#include<iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // hidden data

public:
BankAccount(){
    balance=0;
}
    // Setter function
    void setBalance(int b) {
        if (b >= 0)
            balance = b;
        else
            balance = 0;
    }

    // Getter function
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    acc.setBalance(1000);   // controlled access

    cout << "Balance = " << acc.getBalance();

    return 0;
}