import java.util.Scanner;
public class MaxMinAvg {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int score[] = new int[10];
        int max, min, sum;
        float avg;
        for (int i = 0; i < score.length; i++) {
            score[i] = input.nextInt();
        }
        for (int i = 0; i < score.length; i++) {
            System.out.println(score[i] + "\t");
        }
        System.out.println();
        min = 100;
        max = 0;
        sum = 0;
        for (int i = 0; i < score.length; i++) {
            sum += score[i];
            if (score[i] > max) {
                max = score[i];
            }
            if (score[i] < min) {
                min = score[i];
            }
        }
        avg = (float) sum / score.length;
        System.out.println("Max = " + max);
        System.out.println("Min = " + min);
        System.out.println("AVG = " + avg);
    }
}