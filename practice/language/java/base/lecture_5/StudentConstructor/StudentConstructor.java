class Student {
    String name;
    String department;
    String className;
    public Student (String s_name, String s_depart, String s_class) {
        name = s_name;
        department = s_depart;
        className = s_class;
    }
}
public class StudentConstructor {
    public static void main (String argv[]) {
        Student mary = new Student( "Mary", "MIS", "1A");
        Student john = new Student( "John", "CSIE", "1C");
        System.out.println("Name\tDepart\tClass\t");
        System.out.println(mary.name + "\t" + mary.department + "\t" + mary.className);
        System.out.println(john.name + "\t" + john.department + "\t" + john.className);
    }
}