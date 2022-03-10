import java.util.Random;
public class PrintRndNum {
    public static void main (String argv[]) {
        Random rnd = new Random();
        for (int i = 0; i < 10; i++) {
            System.out.println(rnd.nextInt(100) + "\t");
        }
    }
}