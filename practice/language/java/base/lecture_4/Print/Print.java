import java.util.Scanner;
public class Print {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int l = input.nextInt();
        boolean b = input.nextBoolean();
        String s = input.nextLine();
        System.out.println("k = " + k + ", l = " + l + 
            ", b = " + b + ", s = " + s);
    }
}
// 10 15 true this is a book