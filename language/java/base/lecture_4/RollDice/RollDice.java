import java.util.Random;
public class RollDice {
    public static void main (String argv[]) {
        Random rnd = new Random();
        int one, two, three, four, five, six;
        one = two = three = four = five = six = 0;
        for (int i = 0; i < 1000; i++) {
            int k = rnd.nextInt(6);
            switch (k) {
                case 0: one++; 
                    break;
                case 1: two++; 
                    break;
                case 2: three++; 
                    break;
                case 3: four++; 
                    break;
                case 4: five++; 
                    break;
                case 5: six++; 
                    break;

            }
        }
        System.out.println("1 點 : " + one);
        System.out.println("2 點 : " + two);
        System.out.println("3 點 : " + three);
        System.out.println("4 點 : " + four);
        System.out.println("5 點 : " + five);
        System.out.println("6 點 : " + six);
    }
}