import java.io.*;
import java.util.*;
public class Correct {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int score = input.nextInt();
        if (score >= 0 && score <= 100) {
            System.out.println("正確 : " + score);
        } else {
            System.out.println("錯誤 : " + score);
        }
    }
}