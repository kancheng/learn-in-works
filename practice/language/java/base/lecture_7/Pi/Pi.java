public class Pi {
    public static void main (String argv[]) {
        double pi = 0;
        double f = 1;
        int n = 1, signed = 1;
        while(f > 1e-5) {
            f = 4.0 / n;
            pi += f * signed;
            n += 2;
            signed *= -1;
        }
        System.out.println("PI = " + pi);
    }
}