public class Binary {
    public static void main (String argv[]) {
        double l, r, m;
        l = 1;
        r = 2;
        System.out.println("L\t\tM\t\tR");
        do {
            m = (l + r) / 2;
            System.out.printf("%.6f\t%.6f\t%.6f\n", l, m, r);
            if (m * m > 2) {
                r = m;
            } else {
                l = m;
            }
        } while (Math.abs(m * m - 2) > 1e-5);
        System.out.printf("Sqrt(2) = %.6f\n", m);
    }
}