class Point {
    int x, y;
    public Point (int x, int y) {
        this.x = x;
        this.y = y;
    }
    public String toString() {
        return "x = " + x + "; y = " + y;
    }
}
public class ObjectOutput {
    public static void main (String argv[]) {
        Point pt1 = new Point(10, 10);
        Point pt2 = new Point(25, 30);
        System.out.println(pt1.toString());
        System.out.println(pt2);
    }
}