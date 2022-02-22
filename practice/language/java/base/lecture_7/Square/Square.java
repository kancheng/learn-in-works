public class Square {
    public static void main (String argv[]) {
        System.out.println("I\tI^2\tI^3");
        for (int i = 1; i <= 10; i++) {
            int square = i * i;
            int cube = i * i * i;
            System.out.println(i + "\t" + square + "\t" + cube);
        }
    }
}