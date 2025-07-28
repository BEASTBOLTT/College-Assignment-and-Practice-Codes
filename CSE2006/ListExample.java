import java.util.*;

public class ListExample {
    public static void main(String[] args) {
        // Using ArrayList
        ArrayList<String> arrayList = new ArrayList<>();
        arrayList.add("Apple");
        arrayList.add("Banana");
        arrayList.add("Cherry");
        System.out.println("ArrayList Elements: " + arrayList);

        // Using Vector
        Vector<String> vector = new Vector<>();
        vector.add("Dog");
        vector.add("Cat");
        vector.add("Elephant");
        System.out.println("Vector Elements: " + vector);

        // Using Stack
        Stack<String> stack = new Stack<>();
        stack.push("Red");
        stack.push("Blue");
        stack.push("Green");
        System.out.println("Stack Elements: " + stack);
        
        // Popping an element from Stack
        System.out.println("Popped Element: " + stack.pop());
        System.out.println("Stack after pop: " + stack);
    }
}


