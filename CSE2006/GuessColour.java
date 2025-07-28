class Colour {
    void what() {
        System.out.println("This is a colour");
    }    
}

class Red extends Colour {
    void see(){
        System.out.println("This is red");
        super.what();
    }
}

class Blue extends Colour {
    void see(){
        System.out.println("This is Blue");
        super.what();
    } 
}

public class GuessColour extends Colour {
    public static void main(String[] args) {
        Red c1 = new Red();
        c1.see(); 
        Blue c2 = new Blue();
        c2.see();   
    }
}