class Operation {
    int m, n;
    public Operation(int mm, int nn) {
        m = mm;
        n = nn;
    }
    int add() {
        return m + n;
    }
    int pow() {
        int v = 1;
        for (int i = 0; i < n; i++) {
            v = v * m;
        }
        return v;
    }
}
public class IntOperation {
    public static void main (String argv[]) {
        Operation op = new Operation(3, 4);
        System.out.println(op.m + " + " + op.n + " = " + op.add());
        System.out.println("power( " + op.m + ", " + op.n + ") = " + op.pow());
    }
}