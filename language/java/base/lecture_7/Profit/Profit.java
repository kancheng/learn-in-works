import java.util.Scanner;
public class Profit {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int total_money = input.nextInt();
        double p = input.nextDouble();
        int yy = input.nextInt();
        System.out.println("Year\tTotal Money");
        for (int i = 1; i <= yy; i++) {
            total_money = (int) (total_money * (1 + p));
            System.out.println(i + ": \t" + total_money);
        }
    }
}