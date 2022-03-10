import java.util.Scanner;
public class UpperCase {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        char ch = input.next().charAt(0);
        if (ch >= 'A' && ch <= 'Z') {
            System.out.println( ch + " 是大寫字母");
        } else {
            System.out.println( ch + " 不是大寫字母");
        }
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
            System.out.println( ch + " 是英文字母");
        } else {
            System.out.println( ch + " 不是英文字母");
        }
    }
}