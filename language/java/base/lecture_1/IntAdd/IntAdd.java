import java.util.Scanner;
public class IntAdd {
    public static void main (String argv[]) {
        int m;
        int n;
        int s;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        m = input.nextInt();
        s = n + m;
        System.out.println( n + " + " + m + " = " + s);
    }
}