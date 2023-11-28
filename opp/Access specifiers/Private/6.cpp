// Bank Account Class
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);
    account.displayBalance();

    account.deposit(500.0);
    account.displayBalance();

    account.withdraw(200.0);
    account.displayBalance();

    account.withdraw(1500.0); // Insufficient funds
    account.displayBalance();

    return 0;
}
