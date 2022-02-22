import java.util.Scanner;
public class CondExp {
    public static void main (String argv[]) {
        for (int i = 0; i < 26; i++ ) {
            System.out.printf("%c%c", 'A' + i, (i % 5 == 4)? '\n': '\t');
        }
    }
}