import java.util.Scanner;
public class Vowel {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        int vowels = 0, others = 0;
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            switch (ch) {
                case 'A': case 'E': case 'I': case 'O': case 'U':
                case 'a':case 'e':case 'i':case 'o':case 'u': vowels++;
                    break;
                default : others++;
                    break;
            }
        }
        System.out.println("vowels = " + vowels + "; others = " + others);
    }
}