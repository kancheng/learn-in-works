import java.util.Random;
public class AugmentFor {
    public static void main (String argv[]) {
        Random rnd = new Random();
        int a[] = new int[10];
        System.out.println(a.length);
        for (int i = 0; i < a.length; i++) {
            a[i] = rnd.nextInt(100);
        }
        int sum = 0;
        for (int s : a) {
            System.out.print(s + "\t");
            sum += s;
        }
        System.out.println("\nAvg = " + (double)sum/a.length);
    }
}