class Bank {
    void payment(int a){
        System.out.println("Payment Successfull");
    }
}

class Paytm extends Bank {
    @Override
    void payment(int a){
        System.out.println("Payment Successfull via Paytm");
    }
}

class Googlepe extends Bank {
    @Override
    void payment(int a){
        System.out.println("Payment Successfull via Googlepe");
    }
}

public class Banking{
    public static void main(String[] args) {
        Googlepe p1 = new Googlepe();
        p1.payment(32);
        Paytm p2 = new Paytm();
        p2.payment(34);
        Bank p3 = new Bank();
        p3.payment(76);
    }
}