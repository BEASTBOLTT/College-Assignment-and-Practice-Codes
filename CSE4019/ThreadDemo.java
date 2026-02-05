// Using Thread class
class ThreadOne extends Thread {
    @Override
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("ThreadOne: " + i);
        }
    }
}

// Using Runnable interface
class ThreadTwo implements Runnable {
    @Override
    public void run() {
        for (int i = 6; i <= 10; i++) {
            System.out.println("ThreadTwo: " + i);
        }
    }
}

public class ThreadDemo {
    public static void main(String[] args) {
        ThreadOne t1 = new ThreadOne();
        Thread t2 = new Thread(new ThreadTwo());

        t1.start();
        t2.start();
    }
}
