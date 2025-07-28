abstract class Playable {
    abstract void play();
}
class Football extends Playable{
    @Override
    void play(){
        System.out.println(" Plays Football");
    }
}

class Basketball extends Playable{
    @Override
    void play(){
        System.out.println(" Plays Basketball");
    }
}

class Rugby extends Playable{
    @Override
    void play(){
        System.out.println(" Plays Rugby");
    }
}

public class Player{
    public static void main(String[] args) {
        Football p1 = new Football();
        p1.play();
        Basketball p2 = new Basketball();
        p2.play();
        Rugby p3 = new Rugby();
        p3.play();
        
    }
}