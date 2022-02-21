import java.util.Scanner;
import java.io.*;
public class Printf {
    public static void main(String argv[])  throws IOException {
        Scanner input = new Scanner( new File("PrintfData.txt"));
        System.out.println("Name\tHeight\tWeight\tIncome");
        while (input.hasNext()) {
            String name = input.next();
            int height = input.nextInt();
            float weight = input.nextFloat();
            int income = input.nextInt();
            System.out.printf("Name : %s\tHeight : %d\tWeight : %6.2f\tIncome : %-8d\n", name, height, weight, income);
        }
    }
}
