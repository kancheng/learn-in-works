public class SquareRoot {
    public static void main (String argv[]) {
        int a = (int)(Math.random() * 20) - 10;
        int b = (int)(Math.random() * 20) - 10;
        int c = (int)(Math.random() * 20) - 10;
        int v = (int)(Math.pow(b, 2) - 4 * a * c);
        if (v > 0) {
            System.out.println("異根 1 : " + (-b + Math.sqrt(v)/(2 * a)));
            System.out.println("異根 2 : " + (-b + Math.sqrt(v)/(2 * a)));
        } else if (v == 0) {
            System.out.println(" 重根 : " + (-b/(2 * a)));
        } else {
            System.out.println("無解");
        }
    }
}