import java.util.Scanner;
public class LeapYear {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        int yy = input.nextInt();
        if (yy % 4 == 0) {
            if (yy % 100 == 0) {
                if (yy % 400 == 0) {
                    System.out.println(yy + " is a leap year");
                } else {
                    System.out.println(yy + " is not a leap year");
                }
            } else {
                System.out.println(yy + " is a leap year");
            }
        } else {
            System.out.println(yy + " is not a leap year");
        }
    }
}