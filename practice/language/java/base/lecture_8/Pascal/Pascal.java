import java.util.Random;
import java.util.Scanner;
public class Pascal {
    public static void main(String[] args) {
        int pascal_no[][] = new int[10][10];
        for (int i = 0; i < pascal_no.length; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || i == j) {
                    pascal_no[i][j] = 1;
                } else {
                    pascal_no[i][j] = pascal_no[i - 1][j - 1] + pascal_no[i - 1][j];
                }
            }
        }
        for (int i = 0; i < pascal_no.length; i++) {
            for (int j = 10; j > i; j--) {
                System.out.printf("   ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.printf("%6d", pascal_no[i][j]);
            }
            System.out.println();
        }
    }
}