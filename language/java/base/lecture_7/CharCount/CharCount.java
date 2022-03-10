import java.util.Scanner;
public class CharCount {
    public static void main (String argv[]) {
        Scanner input = new Scanner(System.in);
        String str;
        int u_char, l_char, d_char, o_char;
        u_char = l_char = d_char = o_char = 0;
        str = input.nextLine();
        while ( str.length() > 0) {
            System.out.println(str);
            for (int i = 0; i < str.length(); i++) {
                char ch = str.charAt(i);
                if (ch >= 'A' && ch <= 'Z') {
                    u_char++;
                } else if (ch >= 'a' && ch <= 'z') {
                    l_char++;
                } else if (ch >= '0' && ch <= '9') {
                    d_char++;
                } else {
                    o_char++;
                }
            }
            str = input.nextLine();
        }
        System.out.printf("upper char = %d \n " , u_char);
        System.out.printf("lower char = %d \n " , l_char);
        System.out.printf("digit char = %d \n " , d_char);
        System.out.printf("other char = %d \n " , o_char);
    }
}