import java.util.Random;
public class BubbleSort {
    public static void main(String[] args) {
        Random rnd = new Random();
        int num[] = new int[8];
        for (int i = 0; i < num.length; i++) {
            num[i] = rnd.nextInt(100);
            System.out.print(num[i] + "\t");
        }
        System.out.println();
        for (int i = num.length - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (num[j] > num[j + 1]) {
                    int t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                }
            }
        }
        for (int i = 0; i < num.length; i++) {
            System.out.print(num[i] + "\t");
        }
    }
}