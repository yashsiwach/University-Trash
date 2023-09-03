// one test case is not working, USE AT YOUR OWN DISCRETION




// // Sample test cases :
// // Input 1 :

// // 123456
// // 1000
// // 654321
// // 1000
// // 500
// // 500

// // Output 1 :

// // Account 123456 has a balance of: 1500
// // Account 654321 has a balance of: 500

// // Input 2 :

// // 1011102
// // 1000
// // 2011101
// // 1000
// // 100
// // 1000

// // Output 2 :

// // Account 1011102 has a balance of: 1100
// // Account 2011101 has a balance of: 0

// // Input 3 :

// // 1023666
// // 1000
// // 6663201
// // 1000
// // 100
// // 1100

// // Output 3 :

// // Insufficient balance in account 6663201
// // Account 1023666 has a balance of: 1100
// // Account 6663201 has a balance of: 1000

#include <iostream>

class BankAccount {
public:
    int accountNumber;
    double balance;

    // Constructor to initialize account number and balance
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
    }

    // Function to withdraw money from the account
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true; // Withdrawal successful
        }
        return false; // Insufficient funds
    }

    // Function to check account balance
    double getBalance() {
        return balance;
    }
};

int main() {
    // Create two bank accounts
    int accNum1, accNum2;
    double initialBalance1, initialBalance2;
    std::cin >> accNum1 >> initialBalance1 >> accNum2 >> initialBalance2;

    BankAccount account1(accNum1, initialBalance1);
    BankAccount account2(accNum2, initialBalance2);

    // Deposit into account1
    double depositAmount;
    std::cin >> depositAmount;
    account1.deposit(depositAmount);

    // Withdraw from account2
    double withdrawalAmount;
    std::cin >> withdrawalAmount;
    bool withdrawalResult = account2.withdraw(withdrawalAmount);

    // Display updated balances
    std::cout << "Account " << accNum1 << " has a balance of: " << account1.getBalance() << std::endl;
    
    if (withdrawalResult) {
        std::cout << "Account " << accNum2 << " has a balance of: " << account2.getBalance() << std::endl;
    } else {
        std::cout << "Insufficient balance in account " << accNum2 << std::endl;
    }

    return 0;
}
