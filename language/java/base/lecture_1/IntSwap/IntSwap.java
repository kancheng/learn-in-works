import java.util.Scanner;
public class IntSwap {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int t;
        System.out.println("n = " + n + "; m = " + m);
        t = n;
        n = m;
        m = t;
        System.out.println("n = " + n + "; m = " + m);
    }
}