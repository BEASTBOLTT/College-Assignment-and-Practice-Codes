class Employee {
    private int employee_id;
    private String employee_name;
    private double employee_salary;

    // Constructor
    public Employee(int id, String name, double salary) {
        this.employee_id = id;
        this.employee_name = name;
        this.employee_salary = salary;
    }

    // Getter and Setter for employee_id
    public int getEmployeeId() {
        return employee_id;
    }

    public void setEmployeeId(int employee_id) {
        this.employee_id = employee_id;
    }

    // Getter and Setter for employee_name
    public String getEmployeeName() {
        return employee_name;
    }

    public void setEmployeeName(String employee_name) {
        this.employee_name = employee_name;
    }

    // Getter for employee_salary (formatted string)
    public String getEmployeeSalary() {
        return String.format("$%.2f", employee_salary);
    }
}

public class Emp{
    public static void main(String[] args) {
        Employee emp = new Employee(001, "ABCD EF", 98765674.675);

        // Display employee details
        System.out.println("Employee ID: " + emp.getEmployeeId());
        System.out.println("Employee Name: " + emp.getEmployeeName());
        System.out.println("Employee Salary: " + emp.getEmployeeSalary());
    }
}
