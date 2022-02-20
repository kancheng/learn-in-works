import java.util.Scanner;
public class ScannerInt {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        long l = input.nextLong();
        double d = input.nextDouble();
        System.out.println("int = " + k);
        System.out.println("long = " + l);
        System.out.println("double = " + d);
    }
}