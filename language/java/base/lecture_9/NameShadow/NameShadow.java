import java.util.Random;
import java.util.Scanner;
class Point {
    private int x; 
    private int y;
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public String toString() {
        return "x = " + x + "; y = " + y;
    }
}
public class NameShadow {
    public static void main(String[] args) {
        Point pt1 = new Point(10, 10);
        System.out.println(pt1);
    }
}