class Student {
    String name;
    String department;
    String className;
}
public class StudentProc {
    public static void main (String argv[]) {
        Student mary = new Student();
        mary.name = "Mary";
        mary.department = "MIS";
        mary.className = "4B";
        System.out.println(" Name : " + mary.name);
        System.out.println(" Department : " + mary.department);
        System.out.println(" Class Name : " + mary.className);
    }
}