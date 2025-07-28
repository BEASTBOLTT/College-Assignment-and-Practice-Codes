import java.util.Scanner;

public class FlowControlPrograms {

    // Method to check if a year is a leap year
    public static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Method to calculate factorial of a number
    public static long factorial(int num) {
        long fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }

    // Method to print Fibonacci series up to a given count
    public static void fibonacci(int count) {
        int a = 0, b = 1;
        System.out.print("Fibonacci Series: " + a + " " + b);
        for (int i = 2; i < count; i++) {
            int next = a + b;
            System.out.print(" " + next);
            a = b;
            b = next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Leap year check
        System.out.print("Enter a year to check if it's a leap year: ");
        int year = scanner.nextInt();
        System.out.println(year + " is " + (isLeapYear(year) ? "a Leap Year" : "not a Leap Year"));

        // Factorial calculation
        System.out.print("Enter a number to find its factorial: ");
        int num = scanner.nextInt();
        System.out.println("Factorial of " + num + " is " + factorial(num));

        // Fibonacci series
        System.out.print("Enter the count for Fibonacci series: ");
        int count = scanner.nextInt();
        fibonacci(count);
        
        scanner.close();
    }
}