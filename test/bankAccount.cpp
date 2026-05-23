#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds!" << std::endl;
        }
    }
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000.0);
    cout << "Initial Balance: " << account.getBalance() <<endl;
    account.deposit(500.0);
    cout << "Balance after deposit: " << account.getBalance() << endl;

    account.withdraw(300.0);
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    account.withdraw(1500.0);  // Insufficient funds
    cout << "Balance after failed withdrawal: " << account.getBalance() << endl;

}
