public class Sum2 {
    public static void main (String argv[]) {
        int i, sum;
        sum = 0;
        for (sum = 0, i = 1; i <= 100; sum += i, i++) {
            ;
        }
        System.out.println("Sum = " + sum);
    }
}