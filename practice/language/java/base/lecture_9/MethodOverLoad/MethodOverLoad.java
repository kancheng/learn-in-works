import java.util.Random;
class MaxOverload {
    public int max(int x, int y) {
        if (x > y) {
            return x;
        } else {
            return y;
        }
    }
    public int max(int x, int y, int z) {
        return max(x, max(y, z));
    }
}
public class MethodOverLoad {
    public static void main(String[] args) {
        Random rnd = new Random();
        MaxOverload maxOverload = new MaxOverload();
        int x = rnd.nextInt(100);
        int y = rnd.nextInt(100);
        int z = rnd.nextInt(100);
        System.out.println("Max("+ x + " , " + y + ") = " + maxOverload.max(x, y));
        System.out.println("Max("+ x + ", " + y + ", " + z + ") = " +
         maxOverload.max(x, y, z));
    }
}