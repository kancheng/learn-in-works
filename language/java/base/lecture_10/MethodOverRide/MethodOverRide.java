class Employee {
    protected String empName;
    protected int monthySalary;
    public Employee(String name,int salary) {
        empName = name;
        monthySalary = salary;
    }
    public int earning(){
        return monthySalary;
    }
    public String getName(){
        return empName;
    }
}
class WageEmployee extends Employee {
    private int hours;
    private int dollarPerHour;
    public WageEmployee(String name,int salary, int hr,int dpin) {
        super(name, salary);
        hours = hr;
        dollarPerHour = dpin;
    }
    public int earning(){
        return super.earning() + hours * dollarPerHour;
    }
}
public class MethodOverRide {
    public static void main(String argv[]) {
        Employee emp = new Employee("John", 32000);
        WageEmployee wageEmp = new WageEmployee("Joe", 12000, 15, 200);
        System.out.println( emp.getName() + " : " + emp.earning());
        System.out.println( wageEmp.getName() + " : " + wageEmp.earning());
    }
}
