public class Sum3 {
    public static void main (String argv[]) {
        int i = 1, sum = 0;
        for (;;) {
            sum = sum + i;
            i++;
            if (i > 100) {
                break;
            } 
        }
        System.out.println("Sum = " + sum);
    }
}