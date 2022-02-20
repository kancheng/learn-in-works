import java.util.Scanner;
public class IfPass {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int score;
        score = input.nextInt();
        if (score >= 60) {
            System.out.println("Pass : " + score);
        } else {
            System.out.println("Failed : " + score);
        }
    }
}