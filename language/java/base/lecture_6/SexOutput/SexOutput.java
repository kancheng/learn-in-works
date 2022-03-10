import java.io.*;
import java.util.*;
public class SexOutput {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int sex = input.nextInt();
        if (sex == 1) {
            System.out.println("Boy");
        } else {
            System.out.println("Girl");
        }
    }
}