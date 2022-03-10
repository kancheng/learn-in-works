import java.util.Random;
import java.util.Scanner;
class Point {
    int x, y;
    public Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
    public String toString() {
        return "x = " + x + "y = " + y;
    }
}
class Triangle {
    Point p1, p2, p3;
    public Triangle (Point pt1, Point pt2, Point pt3) {
        p1 = pt1;
        p2 = pt2;
        p3 = pt3;
    }
    double area() {
        double l1 = leng(p1, p2);
        double l2 = leng(p2, p3);
        double l3 = leng(p3, p1);
        double s = (l1 + l2 + l3) / 2;
        return Math.sqrt(s * (s - l1) * (s - l2) * (s - l3));
    }
    double leng (Point pt1, Point pt2) {
        int xx = pt1.x - pt2.x;
        int yy = pt1.y - pt2.y;
        return Math.sqrt(xx * xx + yy * yy);
    }
}
public class TriangleMain {
    public static void main(String[] args) {
        Point p1 = new Point(0, 0);
        Point p2 = new Point(0, 10);
        Point p3 = new Point(15, 0);
        Triangle tri = new Triangle(p1, p2, p3);
        System.out.println("Area = " + tri.area());
    }
}