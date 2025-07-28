abstract class Shape{
    abstract void area(int l, int b);
    Shape(String a){
        System.out.println("We are using the Shape "+a);
    }
    String what = "It is a shape";
    void color(){
        System.out.println("No color");
    }
}

class Rectangle extends Shape{

    Rectangle(){
        super("Do you understand");
    }
    @Override
    void area(int l, int b){
        String what = "It is a rectangle";
        System.out.println(super.what);
        System.out.println(what);
        System.out.println(l*b);
    }
}

public class TestShape{
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        r.area(2, 4);
    }
}