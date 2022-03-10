public class SumWhile {
    public static void main (String argv[]) {
        int i = 1, sum = 0;
        while ( i <= 100) {
            sum += i;
            i++;
        }
        System.out.println("sum = " + sum);
    }
}