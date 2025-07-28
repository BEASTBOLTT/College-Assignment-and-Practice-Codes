import java.util.concurrent.CountDownLatch;

class CountUpTask implements Runnable {
    private CountDownLatch startSignal, doneSignal;

    public CountUpTask(CountDownLatch startSignal, CountDownLatch doneSignal) {
        this.startSignal = startSignal;
        this.doneSignal = doneSignal;
    }

    @Override
    public void run() {
        try {
            startSignal.await(); // Wait for the start signal
            for (int i = 0; i <= 9; i++) {
                System.out.println(Thread.currentThread().getName() + " CountUp: " + i);
                Thread.sleep(200);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {
            doneSignal.countDown(); // Indicate task completion
        }
    }
}

class CountDownTask implements Runnable {
    private CountDownLatch startSignal, doneSignal;

    public CountDownTask(CountDownLatch startSignal, CountDownLatch doneSignal) {
        this.startSignal = startSignal;
        this.doneSignal = doneSignal;
    }

    @Override
    public void run() {
        try {
            startSignal.await(); // Wait for the start signal
            for (int i = 9; i >= 0; i--) {
                System.out.println(Thread.currentThread().getName() + " CountDown: " + i);
                Thread.sleep(200);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {
            doneSignal.countDown(); // Indicate task completion
        }
    }
}

public class CDLatch {
    public static void main(String[] args) {
        CountDownLatch startSignal = new CountDownLatch(1);
        CountDownLatch doneSignal = new CountDownLatch(2);

        Thread countUpThread = new Thread(new CountUpTask(startSignal, doneSignal), "Thread-Up");
        Thread countDownThread = new Thread(new CountDownTask(startSignal, doneSignal), "Thread-Down");

        countUpThread.start();
        countDownThread.start();

        System.out.println("Ready... Set... Go!");
        startSignal.countDown(); // Start both threads

        try {
            doneSignal.await(); // Wait for both threads to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Both threads finished execution.");
    }
}
