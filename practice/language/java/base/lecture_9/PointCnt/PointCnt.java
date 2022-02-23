class Point {
    int x, y;
    static int cnt = 0;
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
        cnt++;
    }
    public String toString() {
        return "(" + x + ", " + y + "), cnt = " + cnt;
    }
}
public class PointCnt {
    public static void main(String[] args) {
        System.out.println("1 : " + Point.cnt);
        Point p1 = new Point(0, 0);
        System.out.println("2 : " + Point.cnt);
        Point p2 = new Point(10, 0);
        System.out.println("3 : " + Point.cnt);
        Point p3 = new Point(0, 10);
        System.out.println("4 : " + Point.cnt);
        System.out.println("P1 = " + p1);
        System.out.println("P2 = " + p2);
        System.out.println("P3 = " + p3);
    }
}