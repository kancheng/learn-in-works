import java.util.Scanner;
public class Prime {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        boolean p = true;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                p = false;
                break;
            }
        }
        if (p) {
            System.out.println(n + " is a prime number.");
        } else {
            System.out.println(n + " is not a prime number.");
        }
    }
}