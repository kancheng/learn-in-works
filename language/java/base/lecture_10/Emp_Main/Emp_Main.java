abstract class Emp {
    String name;
    public Emp(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }
    public abstract int earnings();
}
class Emp_A extends Emp {
    private int monthySalary;
    public Emp_A (String name, int salary) {
        super (name);
        monthySalary = salary;
    }
    public int earnings(){
        return monthySalary;
    }
}
class Emp_B extends Emp_A {
    private int hours, dollarPerHour;
    public Emp_B (String name, int salary, int hrs, int dph) {
        super(name, salary);
        hours = hrs;
        dollarPerHour = dph;
    }
    public int earnings() {
        return super.earnings() + hours * dollarPerHour;
    }
}
class Emp_C extends Emp {
    private int hours, dollarPerHour;
    public Emp_C(String name, int hrs, int dph) {
        super(name);
        hours = hrs;
        dollarPerHour = dph;
    }
    public int earnings () {
        return hours * dollarPerHour;
    }
}
public class Emp_Main {
    public static void main(String argv[]) {
        Emp_A emp_a = new Emp_A("John", 50000);
        Emp_B emp_b = new Emp_B("Mary", 30000, 30, 300);
        Emp_C emp_c = new Emp_C("Tom", 200, 100);
        Emp emp_arr[] = new Emp[3];
        emp_arr[0] = emp_a;
        emp_arr[1] = emp_b;
        emp_arr[2] = emp_c;
        for (int i = 0; i < emp_arr.length; i++) {
            System.out.println(emp_arr[i].getName() + " : " + emp_arr[i].earnings());
        }
    }
}
