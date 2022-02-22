class Student {
    private String name;
    String department;
    String className;
    public Student (String s_name, String s_depart, String s_class) {
        setName(s_name);
        department = s_depart;
        className = s_class;
    }
    public void setName (String s_name) {
        name = s_name;
    }
    public String getName () {
        return name;
    }
}
public class StudentSetGet {
    public static void main (String argv[]) {
        Student mary = new Student( "Mary", "MIS", "1A");
        System.out.println("Name\tDepart\tClass\t");
        // System.out.println(mary.getName() + "\t" + mary.department +
        //    "\t" + mary.className);
        // mary.name = "Jane";
        mary.setName("Jane");
        mary.department = "CSIE";
        mary.className = "1C";
        Student john = new Student( "John", "CSIE", "1C");
        System.out.println(mary.getName() + "\t" + mary.department +
            "\t" + mary.className);
    }
}