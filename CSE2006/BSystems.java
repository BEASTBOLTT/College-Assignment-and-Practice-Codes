import java.util.ArrayList;
import java.util.List;

// Account interface
interface Account {
    void deposit(double amount);
    void withdraw(double amount);
    double calculateInterest();
    void viewBalance();
}

// BankAccount abstract class implementing Account
abstract class BankAccount implements Account {
    protected String accountNumber;
    protected double balance;

    public BankAccount(String accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    @Override
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }

    @Override
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Invalid withdrawal amount or insufficient funds.");
        }
    }

    @Override
    public void viewBalance() {
        System.out.println("Account Number: " + accountNumber + " | Balance: " + balance);
    }
}

// SavingsAccount class
class SavingsAccount extends BankAccount {
    private double interestRate;

    public SavingsAccount(String accountNumber, double balance, double interestRate) {
        super(accountNumber, balance);
        this.interestRate = interestRate;
    }

    @Override
    public double calculateInterest() {
        return balance * (interestRate / 100);
    }
}

// CurrentAccount class
class CurrentAccount extends BankAccount {
    private double overdraftLimit;

    public CurrentAccount(String accountNumber, double balance, double overdraftLimit) {
        super(accountNumber, balance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    public void withdraw(double amount) {
        if (amount > 0 && (balance + overdraftLimit) >= amount) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Exceeded overdraft limit or invalid amount.");
        }
    }

    @Override
    public double calculateInterest() {
        return 0; // No interest for current accounts
    }
}

// Bank class
class Bank {
    private List<Account> accounts;

    public Bank() {
        this.accounts = new ArrayList<>();
    }

    public void addAccount(Account account) {
        accounts.add(account);
    }

    public void showAllAccounts() {
        for (Account acc : accounts) {
            acc.viewBalance();
        }
    }
}

// Main class
public class BSystems {
    public static void main(String[] args) {
        Bank bank = new Bank();

        SavingsAccount savings = new SavingsAccount("S123", 5000, 5);
        CurrentAccount current = new CurrentAccount("C456", 3000, 1000);

        bank.addAccount(savings);
        bank.addAccount(current);

        savings.deposit(1000);
        savings.viewBalance();
        System.out.println("Interest Earned: " + savings.calculateInterest());

        current.withdraw(3500);
        current.viewBalance();

        System.out.println("All Accounts:");
        bank.showAllAccounts();
    }
}
