public class PointCnt2 {
    int x, y;
    static int cnt = 0;    
    public PointCnt2 (int x, int y) {
        this.x = x;
        this.y = y;
        cnt++;
    }
    public String toString() {
        return "( " + x + ", " + y + "), cnt = " + cnt;
    }
    public static void main(String[] args) {
        System.out.println("1 : " + PointCnt2.cnt);
        PointCnt2 p1 = new PointCnt2(0, 0);
        System.out.println("2 : " + PointCnt2.cnt);
        PointCnt2 p2 = new PointCnt2(10, 0);
        System.out.println("3 : " + PointCnt2.cnt);
        PointCnt2 p3 = new PointCnt2(0, 10);
        System.out.println("4 : " + PointCnt2.cnt);
        System.out.println("P1 = " + p1);
        System.out.println("P2 = " + p2);
        System.out.println("P3 = " + p3);
    }
}