import java.util.Scanner;
public class ArrayAccess {
    public static void main (String argv[]) {
        int a[] = new int[10];
        for (int i = 0; i < a.length; i++) {
            a[i] = i * i;
        }
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
}