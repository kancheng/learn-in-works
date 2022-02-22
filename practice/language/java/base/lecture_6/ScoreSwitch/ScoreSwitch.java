import java.util.Scanner;
public class ScoreSwitch {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int score = input.nextInt();
        if (score < 0 || score > 100) {
            System.out.println("Wrong Input : " + score);
        } else {
            switch(score / 10) {
                case 10 :
                case 9 :
                    System.out.println("優 : " + score);
                    break;
                case 8 :
                    System.out.println("甲 : " + score);
                    break;
                case 7 :
                    System.out.println("乙 : " + score);
                    break;
                case 6 :
                    System.out.println("丙 : " + score);
                    break;
                default :
                    System.out.println("不及格 : " + score);
                    break;
            }
        }
    }
}