import java.util.Random;
import java.util.Scanner;
class Point {
    int x, y;
    public Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
    public String toString() {
        return "x = " + x + "; y = " + y;
    }
}
public class ObjReference {
    public static void main(String[] args) {
        Point p = new Point(10, 15);
        Point q;
        System.out.println(p);
        q = p;
        System.out.println(q);
        p.x = 15;
        System.out.println(q);
    }
}