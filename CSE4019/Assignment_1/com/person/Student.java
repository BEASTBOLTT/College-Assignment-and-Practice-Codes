package com.person;

public class Student extends Person {

    // private data member
    private int rollNumber;

    // constructor
    public Student(String name, int age, String city, int rollNumber) {
        super(name, age, city);
        this.rollNumber = rollNumber;
    }

    // public method to display student details
    public void displayStudentDetails() {

        // Accessing public method of parent
        displayPersonDetails();

        // Accessing protected member of parent
        System.out.println("Age (protected): " + age);

        // Accessing default member of parent (same package)
        System.out.println("City (default): " + city);

        // Accessing own private member
        System.out.println("Roll Number: " + rollNumber);

        // ❌ Not allowed:
        // System.out.println(name); // private member of Person
    }
}
