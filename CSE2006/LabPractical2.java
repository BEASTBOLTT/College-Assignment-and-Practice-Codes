interface Animal {
    void eat();
    void sleep();
    void run();
}

class Lion implements Animal{
    @Override
    public void eat() {
        System.out.println("The Lion eats");

    }
    @Override
    public void sleep() {
        System.out.println("The Lion sleeps");
    }
    @Override
    public void run() {
        System.out.println("The Lion runs");
    }
}

class Tiger implements Animal{
    @Override
    public void eat() {
        System.out.println("The Tiger eats");

    }
    @Override
    public void sleep() {
        System.out.println("The Tiger sleeps");
    }
    @Override
    public void run() {
        System.out.println("The Tiger runs");
    }
}

class Deer implements Animal{
    @Override
    public void eat() {
        System.out.println("The Deer eats");
    }
    @Override
    public void sleep() {
        System.out.println("The Deer sleeps");
    }
    @Override
    public void run() {
        System.out.println("The Deer runs");
    }
}

public class LabPractical2 {
    public static void main(String[] args) {
        Lion l = new Lion();
        l.eat();
        l.sleep();
        l.run();

        Tiger t = new Tiger();
        t.eat();
        t.sleep();
        t.run();

        Deer d = new Deer();
        d.eat();
        d.sleep();
        d.run();
    }
    
}
