import java.util.Random;
public class Ace {
    public static void main (String argv[]) {
        Random rnd = new Random();
        int ace[] = new int[6];
        for (int i = 0; i < 1000; i++) {
            int k = rnd.nextInt(6);
            ace[k]++;
        }
        for (int i = 0; i < ace.length; i++) {
            System.out.println("Point " + (i + 1) + " : " + ace[i] + " times");
        }
    }
}