import java.util.Random;
class Point {
    private int x, y;
    public Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
    public double distance (Point p) {
        int xx = (x - p.x) * (x - p.x);
        int yy = (y - p.y) * (y - p.y);
        return Math.sqrt(xx + yy);
    }
    public Point midPoint(Point p) {
        int xx = (x + p.x)/ 2;
        int yy = (y + p.y)/ 2;
        return new Point(xx, yy);
    }
    public String toString() {
        return "x = " + x + " ; y = " + y;
    }
}
public class MidPoint {
    public static void main(String[] args) {
        Point p1 = new Point(12, 10);
        Point p2 = new Point(6, 9);
        System.out.println("MidPoint : " + p1.midPoint(p2));
        System.out.println("Distance : " + p1.distance(p2));
    }
}