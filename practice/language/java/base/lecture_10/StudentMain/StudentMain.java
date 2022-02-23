   /**
 * Method : Course(), getSourseName(), getScore()
 * */
class Course {
    private String courseName; // 課程名稱
    private int score; // 分數
    // 建構式 : 設定課程名稱、分數
    public Course(String name, int s) {
        courseName = name;
        score = s;
    }
    // 取得並回傳課程名稱
    public String getCourseName () {
        return courseName;
    }
    // 取得並傳回分數
    public int getScore() {
        return score;
    }
    public static void main(String argv[]) {

    }
}
class Student {
    protected String name;
    protected Course subject[];
    public Student (String name, Course sub[]) {
        this.name = name;
        subject = sub;
    }
}
class UnderStudent extends Student {
    public UnderStudent(String name, Course sub[]) {
        super(name, sub);
    }
    private boolean passedOrNot() {
        int total = 0;
        int subLength = subject.length;
        for (int i = 0; i < subLength; i++) {
            total += subject[i].getScore();
        }
        if (total/subLength >= 60) {
            return true;
        } else {
            return false;
        }
    }
    public void output () {
        System.out.print(name + " : ");
        for (int i = 0; i < subject.length; i++) {
            System.out.printf("%s%4d", subject[i].getCourseName(), subject[i].getScore());
        }
        System.out.println(passedOrNot()? "Passed" : "Failed");
    }
}
class GraduateStudent extends Student {
    public GraduateStudent (String name, Course sub[]) {
        super(name, sub);
    }
    private boolean passedOrNot() {
        int total = 0;
        int subLength = subject.length;
        for (int i = 0; i < subLength; i++) {
            total += subject[i].getScore();
        }
        if (total/ subLength >= 70) {
            return true;
        } else {
            return false;
        }
    }
    public void output() {
        System.out.print(name + " : ");
        for (int i = 0; i < subject.length; i++) {
            System.out.printf("%s%4d", subject[i].getCourseName(), subject[i].getScore());
        }
        System.out.println(passedOrNot()? "Passed" : "Failed");
    }
}
public class StudentMain {
    public static void main(String argv[]) {
        Course johnCourse[] = new Course[4];
        johnCourse[0] = new Course("CS", 75);
        johnCourse[1] = new Course("AI", 65);
        johnCourse[2] = new Course("ML", 60);
        johnCourse[3] = new Course("DL", 50);
        UnderStudent john = new UnderStudent("john", johnCourse);
        john.output();
        Course maryCourse[] = new Course[4];
        maryCourse[0] = new Course("CS", 66);
        maryCourse[1] = new Course("AI", 85);
        maryCourse[2] = new Course("ML", 55);
        maryCourse[3] = new Course("DL", 77);
        GraduateStudent mary = new GraduateStudent("mary", maryCourse);
        mary.output();
    }
}
