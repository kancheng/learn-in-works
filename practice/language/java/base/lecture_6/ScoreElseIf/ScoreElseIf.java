import java.util.Scanner;
public class ScoreElseIf {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int score = input.nextInt();
        if (score < 0 || score > 100) {
            System.out.println("Wrong Input : " + score);
        } else if (score >= 90) {
            System.out.println("優 : " + score);
        } else if (score >= 80) {
            System.out.println("甲 : " + score);
        } else if (score >= 70) {
            System.out.println("乙 : " + score);
        } else if (score >= 60) {
            System.out.println("丙 : " + score);
        } else {
            System.out.println("不及格 : " + score);
        }
    }
}