class Parameter {
    void swap (int n, int m) {
        int t = n;
        n = m;
        m = t;
    }
    void change (int b[]) {
        for (int i = 0; i < b.length; i++) {
            b[i] = b[i] * 2;
        }
    }
}
public class ParameterProc {
    public static void main(String[] args) {
        Parameter p = new Parameter();
        int n = 3;
        int m = 4;
        int a[] = { 1, 2, 3, 4};
        System.out.println("n = " + n + " m = " + m);
        p.swap(n, m);
        System.out.println("n = " + n + " m = " + m);
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + "\t");
        }
        System.out.println();
        p.change(a);
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + "\t");
        }
        System.out.println();
    }
}