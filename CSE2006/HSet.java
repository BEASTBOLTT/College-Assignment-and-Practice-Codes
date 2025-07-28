import java.util.HashSet;

public class HSet {
    public static void main(String[] args) {
        HashSet<String> cars = new HashSet<String>();
        cars.add("BMW");
        cars.add("Toyota");
        cars.add("Honda");
        cars.add("BMW");
        System.out.println(cars);
    }
}
