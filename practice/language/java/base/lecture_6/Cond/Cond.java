import java.util.Scanner;
public class Cond {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        System.out.println("Please input no. of book : ");
        int n = input.nextInt();
        System.out.printf("%d book%s \n", n, (n > 1) ? "s" : "");
    }
}