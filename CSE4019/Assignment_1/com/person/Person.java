package com.person;

public class Person {

    // private data member
    private String name;

    // protected data member
    protected int age;

    // default (package-private) data member
    String city;

    // constructor to initialize values
    public Person(String name, int age, String city) {
        this.name = name;
        this.age = age;
        this.city = city;
    }

    // public method to display details
    public void displayPersonDetails() {
        System.out.println("Name: " + name);     // private accessible within class
        System.out.println("Age: " + age);       // protected
        System.out.println("City: " + city);     // default
    }

    // public getter for private variable
    public String getName() {
        return name;
    }
}
