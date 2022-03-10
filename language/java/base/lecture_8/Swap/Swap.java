import java.util.Scanner;
public class Swap {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int bin[] = new int[10];
        int leng = 0;
        System.out.println("Binary of " + n + " : ");
        while (n > 0) {
            bin[leng] = n % 2;
            n /= 2;
            leng++;
        }
        for (int i = 0; i < leng / 2; i++) {
            int t = bin[i];
            bin[i] = bin[leng - i - 1];
            bin[leng - i - 1] = t;
        }
        for (int i = 0; i < leng; i++) {
            System.out.print(bin[i] + " ");
        }
    }
}