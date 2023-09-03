#include <iostream>
#include <cstring>

using namespace std;

// Define a structure for BankAccount
struct BankAccount {
    char* accountNumber;
    double balance;
};

int main() {
    // Get input for account number
    char accountNumber[20];
    cin.getline(accountNumber, 20);

    // Get input for initial balance
    double initialBalance;
    cin >> initialBalance;
    
    // Dynamically allocate memory for BankAccount structure
    BankAccount* account = new BankAccount;

    // Dynamically allocate memory for account number
    account->accountNumber = new char[strlen(accountNumber) + 1];
    strcpy(account->accountNumber, accountNumber);

    // Store the initial balance
    account->balance = initialBalance;

    // Display the account balance
    cout << "Account Balance: $" << account->balance << endl;

    // Fix the dangling pointer issue by deallocating memory properly
    delete[] account->accountNumber; // Deallocate account number
    delete account; // Deallocate the BankAccount structure

    // Display error message
    cout << "Error: Dangling pointer detected!" << endl;

    return 0;
}
