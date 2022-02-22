import java.util.Scanner;
public class Continue {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int sum = 0;
        for (int i = 0; i < 5;) {
            int n = input.nextInt();
            if (n < 0) {
                continue;
            }
            sum += n;
            i++;
        }
        System.out.println("sum = " + sum);
    }
}