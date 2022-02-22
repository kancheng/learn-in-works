import java.util.Random;
public class OneWayIf {
    public static void main (String argv[]) {
        Random rnd = new Random();
        int m = rnd.nextInt(100);
        int n = rnd.nextInt(100);
        System.out.println("m = " + m + "; n = " + n);
        if (m < n) {
            m = n;
        }
        System.out.println("Max = " + m);
    }
}