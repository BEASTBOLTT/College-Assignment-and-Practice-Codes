class Animal {
        void sound(){
            System.out.println(" Makes Sound");
        }
}

class Dog extends Animal {
    
    @Override
    void sound(){
        System.out.println(" It barks");
    }
}

public class Testinherit{
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.sound();
        Animal animal = new Animal();
        animal.sound();
    }
}