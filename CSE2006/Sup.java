class NAnimal {
    String name = "animal";
    void sound(){
        System.out.println(name + " Makes Sound");
    }
}

class Cat extends NAnimal {
    String name = "cat";
@Override
void sound(){
    System.out.println(super.name + " shouts");
}

}

public class Sup{
public static void main(String[] args) {
    Cat cat = new Cat();
    cat.sound();   
    }
}