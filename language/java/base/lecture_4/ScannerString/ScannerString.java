import java.util.Scanner;
import java.util.*;
public class ScannerString {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        System.out.println(str.getClass().getSimpleName());
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch == Character.MIN_VALUE) {
                System.out.println();
            } else {
                System.out.print(ch);
            }
        }
    }
}