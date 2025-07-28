#include <iostream>
#include <string>

class BankAccount {
private:
    std::string name;
    std::string account_number;
    std::string account_type;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(std::string depositor_name, std::string acct_number, std::string acct_type, double initial_balance = 0.0) {
        name = depositor_name;
        account_number = acct_number;
        account_type = acct_type;
        balance = initial_balance;
    }

    // Method to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    // Method to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                std::cout << "Withdrawn: $" << amount << std::endl;
            } else {
                std::cout << "Insufficient balance." << std::endl;
            }
        } else {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    // Method to display the name and balance
    void displayAccountInfo() const {
        std::cout << "Account Holder: " << name << std::endl;
        std::cout << "Account Number: " << account_number << std::endl;
        std::cout << "Account Type: " << account_type << std::endl;
        std::cout << "Balance: Rs." << balance << std::endl;
    }
};

int main() {
    std::string name, account_number, account_type;
    double initial_balance;

    // Taking user input for account details
    std::cout << "Enter the name of the depositor: ";
    std::getline(std::cin, name);
    std::cout << "Enter the account number: ";
    std::getline(std::cin, account_number);
    std::cout << "Enter the type of account: ";
    std::getline(std::cin, account_type);
    std::cout << "Enter the initial balance: ";
    std::cin >> initial_balance;

    BankAccount account(name, account_number, account_type, initial_balance);
    account.displayAccountInfo();

    // Perform deposit
    double deposit_amount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> deposit_amount;
    account.deposit(deposit_amount);

    // Perform withdrawal
    double withdraw_amount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> withdraw_amount;
    account.withdraw(withdraw_amount);

    account.displayAccountInfo();

    return 0;
}
