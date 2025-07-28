abstract class GeometricShape {
    // Abstract methods to be implemented by subclasses
    abstract double area();
    abstract double perimeter();
}

// Triangle subclass
class Triangle extends GeometricShape {
    private double a, b, c; // Sides of the triangle

    public Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    @Override
    double area() {
        double s = (a + b + c) / 2; // Semi-perimeter
        return Math.sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }

    @Override
    double perimeter() {
        return a + b + c;
    }
}

// Square subclass
class Square extends GeometricShape {
    private double side;

    public Square(double side) {
        this.side = side;
    }

    @Override
    double area() {
        return side * side;
    }

    @Override
    double perimeter() {
        return 4 * side;
    }
}

// Main class to test the implementation
public class Main {
    public static void main(String[] args) {
        GeometricShape triangle = new Triangle(3, 4, 5);
        System.out.println("Triangle Area: " + triangle.area());
        System.out.println("Triangle Perimeter: " + triangle.perimeter());

        GeometricShape square = new Square(4);
        System.out.println("Square Area: " + square.area());
        System.out.println("Square Perimeter: " + square.perimeter());
    }
}
