import java.util.Scanner;

class Person {
    String name;
    int age;
    // Constructor for Person
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}
class Student extends Person {
    int[] marks; // array to store 5 marks
    // Constructor for Student
    Student(String name, int age, int[] marks) {
        super(name, age); // call base class constructor
        this.marks = marks;
    }
    // Method to calculate average
    double calculateAverage() {
        int sum = 0;
        for (int m : marks) {
            sum += m;
        }
        return sum / (double) marks.length;
    }
    // Highest mark
    int highestMark() {
        int max = marks[0];
        for (int m : marks) {
            if (m > max) max = m;
        }
        return max;
    }
    // Optional: lowest mark
    int lowestMark() {
        int min = marks[0];
        for (int m : marks) {
            if (m < min) min = m;
        }
        return min;
    }
}
public class StudentDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Input name and age

        System.out.print("Enter name: ");
        String name = sc.nextLine();
        System.out.print("Enter age: ");
        int age = sc.nextInt();
        // Input marks
        int[] marks = new int[5];
        System.out.println("Enter 5 marks: ");
        for (int i = 0; i < 5; i++) {
            marks[i] = sc.nextInt();
        }
        // Create Student object
        Student student = new Student(name, age, marks);
        // Print details
        System.out.println("\nStudent Details:");
        System.out.println("Name: " + student.name);
        System.out.println("Age: " + student.age);
        System.out.print("Marks: ");
        for (int m : student.marks) {
            System.out.print(m + " ");
        }
        System.out.println("\nAverage: " + student.calculateAverage());
        System.out.println("Highest Mark: " + student.highestMark());
        System.out.println("Lowest Mark: " + student.lowestMark());
        sc.close(); // close scanner
    }

}