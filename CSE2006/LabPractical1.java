import java.util.ArrayList;
import java.util.List;

interface BankAccount{
    void deposit(double amount);
    void withdraw(double amount);
    void CalcInterest();
    void Balance();
    

}

class Savings implements BankAccount{
    private int acno;
    private double balance;

    public Savings(int acno, double balance){
        this.acno = acno;
        this.balance = balance;
    }
    @Override
    public void deposit(double amount){
        balance = balance + amount;
        System.out.println("Amount Deposited");
    }
    @Override
    public void withdraw(double amount){
        if(amount <= balance){
            balance = balance - amount;
            System.out.println("Amount Withdrawn");
        }
        else{
            System.out.println("Insufficient funds");
        }
    }
    @Override
    public void CalcInterest(){
        System.out.println("The interest earned in the last year is : " + balance * 7/100);
    }
    @Override
    public void Balance(){
        System.out.println("Account Balance is : " + balance);
    }
}

class Current implements BankAccount{
    private int acno;
    private double balance;

    public Current(int acno, double balance){
        this.acno = acno;
        this.balance = balance;
    }
    @Override
    public void deposit(double amount){
        balance = balance + amount;
        System.out.println("Amount Deposited");
    }
    @Override
    public void withdraw(double amount){
        if(amount <= balance){
            balance = balance - amount;
            System.out.println("Amount Withdrawn");
        }
        else{
            System.out.println("Insufficient funds");
        }
    }
    @Override
    public void CalcInterest(){
        System.out.println("There is no interest calculated in current account");
    }
    @Override
    public void Balance(){
        System.out.println("Account Balance is : " + balance);
    }
}

class Bank{

    private List<BankAccount> accounts;

    public Bank() {
        accounts = new ArrayList<>();
    }

    public void addAccount(BankAccount account) {
        accounts.add(account);
    }

    public void displayAllAccounts() {
        for (BankAccount account : accounts) {
            account.Balance();
        }
    }
}

public class LabPractical1{
    public static void main(String[] args) {
        Bank nb = new Bank();

        Savings sac = new Savings(67484684, 98776);
        Current cac = new Current(859403, 7655);

        nb.addAccount(cac);
        nb.addAccount(sac);

        sac.deposit(324);
        sac.withdraw(44);
        sac.CalcInterest();
        sac.Balance();

        cac.deposit(9924);
        cac.withdraw(4764);
        cac.CalcInterest();
        cac.Balance();

    }
}