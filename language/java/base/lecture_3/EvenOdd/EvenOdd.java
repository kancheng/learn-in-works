import java.util.Random;
public class EvenOdd {
    public static void main (String argv[]) {
        Random rnd = new Random();
        int k = rnd.nextInt(100);
        if (k % 2 == 0) {
            System.out.println(k + " is Even");
        } else {
            System.out.println(k + " is Odd");
        }
    }
}