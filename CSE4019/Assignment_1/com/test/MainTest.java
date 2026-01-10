package com.test;

import com.person.Student;

public class MainTest {

    public static void main(String[] args) {

        Student s = new Student("Devam", 20, "Chennai", 101);

        //Allowed: public method
        s.displayStudentDetails();

        //Not allowed: protected member (different package)
        //System.out.println(s.age);

        //Not allowed: default member (different package)
        //System.out.println(s.city);

        //Not allowed: private member
        //System.out.println(s.name);

        System.out.println("\nAccess restrictions demonstrated successfully.");
    }
}
