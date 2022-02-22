import java.util.Scanner;
public class DoWhile {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sum = 0;
        do {
            sum += n % 10;
            n /= 10;
        } while (n > 0);
        System.out.println("Result : " + sum);
    }
}