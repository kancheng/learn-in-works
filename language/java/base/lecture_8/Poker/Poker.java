import java.util.Random;
public class Poker {
    public static void main (String argv[]) {
        Random rnd = new Random();
        int poke[] = new int[5];
        int i, j, k;
        String number[] = {"1","2","3","4","5","6","7","8","9","10","J","Q","K"};
        String flower[] = {"Spade", "Heart", "Diamond", "Club"};
        for (i = 0; i < 5;) {
            k = rnd.nextInt(52);
            for (j = 0; j < i; j++){
                if (poke[j] == k){
                    break;
                }
            }
            if (j == i) {
                poke[i] = k;
                i++;
            }
        }
        for (i = 0; i < 5; i++) {
            System.out.printf("%d : %s %s \n", i + 1, flower[poke[i]/13], number[poke[i]/13]);
        }
    }
}