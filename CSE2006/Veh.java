abstract class Vehicle {
    protected String make, model, fuelType;
    protected int year;

    public Vehicle(String make, String model, int year, String fuelType) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.fuelType = fuelType;
    }

    abstract double calculateFuelEfficiency(); // km per liter
    abstract double calculateDistanceTraveled(double fuelUsed);
    abstract double getMaxSpeed();

    public void displayInfo() {
        System.out.println("Make: " + make + ", Model: " + model + ", Year: " + year + ", Fuel Type: " + fuelType);
    }
}

class Truck extends Vehicle {
    public Truck(String make, String model, int year, String fuelType) {
        super(make, model, year, fuelType);
    }

    @Override
    double calculateFuelEfficiency() {
        return 6.0; // Example: 6 km per liter
    }

    @Override
    double calculateDistanceTraveled(double fuelUsed) {
        return fuelUsed * calculateFuelEfficiency();
    }

    @Override
    double getMaxSpeed() {
        return 120.0;
    }
}

class Car extends Vehicle {
    public Car(String make, String model, int year, String fuelType) {
        super(make, model, year, fuelType);
    }

    @Override
    double calculateFuelEfficiency() {
        return 15.0; // Example: 15 km per liter
    }

    @Override
    double calculateDistanceTraveled(double fuelUsed) {
        return fuelUsed * calculateFuelEfficiency();
    }

    @Override
    double getMaxSpeed() {
        return 180.0;
    }
}

class Motorcycle extends Vehicle {
    public Motorcycle(String make, String model, int year, String fuelType) {
        super(make, model, year, fuelType);
    }

    @Override
    double calculateFuelEfficiency() {
        return 30.0; // Example: 30 km per liter
    }

    @Override
    double calculateDistanceTraveled(double fuelUsed) {
        return fuelUsed * calculateFuelEfficiency();
    }

    @Override
    double getMaxSpeed() {
        return 200.0;
    }
}

public class Veh {
    public static void main(String[] args) {
        Vehicle truck = new Truck("Volvo", "FH16", 2020, "Diesel");
        Vehicle car = new Car("Toyota", "Camry", 2022, "Petrol");
        Vehicle motorcycle = new Motorcycle("Yamaha", "R1", 2023, "Petrol");
        
        truck.displayInfo();
        System.out.println("Max Speed: " + truck.getMaxSpeed() + " km/h");
        System.out.println("Distance traveled with 10L: " + truck.calculateDistanceTraveled(10) + " km\n");

        car.displayInfo();
        System.out.println("Max Speed: " + car.getMaxSpeed() + " km/h");
        System.out.println("Distance traveled with 10L: " + car.calculateDistanceTraveled(10) + " km\n");

        motorcycle.displayInfo();
        System.out.println("Max Speed: " + motorcycle.getMaxSpeed() + " km/h");
        System.out.println("Distance traveled with 10L: " + motorcycle.calculateDistanceTraveled(10) + " km");
    }
}
