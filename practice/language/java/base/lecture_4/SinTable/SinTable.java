// Sin Cos Tan
public class SinTable {
    public static void main (String argv[]) {
        System.out.println("Angle\tSin\tCos\tTan");
        for (int deg = 0; deg < 360; deg += 30 ) {
            double ang = Math.PI * deg / 180;
            System.out.printf("%d\t%7.4f\t%7.4f\t%7.4f\n", 
                deg, Math.sin(ang), Math.cos(ang), Math.tan(ang));
        }
    }
}