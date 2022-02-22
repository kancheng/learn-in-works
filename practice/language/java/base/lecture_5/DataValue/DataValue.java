class Data {
    int a;
    byte b;
    char c;
    boolean d;
    double e;
    String f;
}
public class DataValue {
    public static void main (String argv[]) {
        Data data = new Data();
        System.out.println(data.a);
        System.out.println(data.b);
        System.out.println("." + data.c + ".");
        System.out.println(data.d);
        System.out.println(data.e);
        System.out.println(data.f);
    }
}