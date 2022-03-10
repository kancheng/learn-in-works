import java.util.Random;
import java.util.Scanner;
public class SubjectScore {
    public static void main(String[] args) {
        final int STU_N = 50;
        final int SUB_N = 6;
        Random rnd = new Random();
        int score [][] = new int [STU_N][SUB_N];
        int sum;
        int i, j;
        float sub_avg[] = new float[SUB_N];
        float stu_avg[] = new float[STU_N];
        for (i = 0; i < STU_N; i++) {
            for (j = 0; j < SUB_N; j++) {
                score[i][j] = rnd.nextInt(101);
            }
        }
        for (i = 0; i < STU_N; i++) {
            sum = 0;
            for (j = 0; j < SUB_N; j++) {
                sum += score[i][j];
            }
            stu_avg[i] = (float) sum / SUB_N;
        }
        for (i = 0; i < SUB_N; i++) {
            sum = 0;
            for (j = 0; j < STU_N; j++) {
                sum += score[j][i];
            }
            sub_avg[i] = (float) sum /STU_N;
        }
        System.out.printf("STU \t");
        for (i = 0; i < SUB_N; i++) {
            System.out.printf("SUB_%d\t", i + 1);
        }
        System.out.printf("average \n ");
        for (i = 0; i < STU_N; i++) {
            System.out.printf("%-4d\t", i + 1);
            for (j = 0; j < SUB_N; j++) {
                System.out.printf("%-4d\t", score[i][j]);
            }
            System.out.printf("%-7.2f\n", stu_avg[i]);
        }
        System.out.printf("\t");
        for (i = 0; i < SUB_N; i++) {
            System.out.printf("%-7.2f\t", sub_avg[i]);
        }
        System.out.println();
    }
}