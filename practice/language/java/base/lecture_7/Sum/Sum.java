public class Sum {
    public static void main (String argv[]) {
        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            sum += i;
        }
        System.out.println("Sum : " + sum);
    }
}