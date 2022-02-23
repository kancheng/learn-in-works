import java.util.Random;
import java.util.Scanner;
public class TwoDimension {
    public static void main(String[] args) {
        int b[][];
        b = new int[3][];
        for (int i = 0; i < b.length; i++) {
            b[i] = new int[4 + i];
        }
        for (int i = 0; i < b.length; i++) {
            for (int j = 0; j < b[i].length; j++) {
                b[i][j] = i * 10 + j;
            }
        }
        for (int i = 0; i < b.length; i++) {
            for (int j = 0; j < b[i].length; j++) {
                System.out.printf("%d\t", b[i][j]);
            }
            System.out.println();
        }
    }
}