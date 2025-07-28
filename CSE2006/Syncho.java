class thread1 extends Thread{
    synchronized public void run(){
        for(int i = 0; i <= 10; i++){
            System.out.println(i);
        }
    }
}

class thread2 extends Thread{
    synchronized public void run(){
        for(int i = 10; i >= 0; i--){
            System.out.println(i);
        }
    }
}

public class Syncho extends Thread{
    public static void main(String[] args) {
        thread1 t1 = new thread1();
        thread2 t2 = new thread2();
        t1.start();
        t2.start();

    }
}
