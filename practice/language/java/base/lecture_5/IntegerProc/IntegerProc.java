class Int {
    int n;
    public Int(int m) {
        n = m;
    }
    int square () {
        return n * n;
    }
    int mul(int k) {
        return n * k;
    }
}
public class IntegerProc {
    public static void main (String argv[]) {
        Int ii = new Int(5);
        int k = 3;
        System.out.println("Square of " + ii.n + " = " + ii.square());
        System.out.println("Multiply of " + ii.n + " and " + k + " = " + ii.mul(k));
    }
}