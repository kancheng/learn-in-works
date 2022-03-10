public class CharPrint {
    public static void main (String argv[]) {
        System.out.println("Upper Case : ");
        for (char i = 'A'; i < 'Z'; i++ ) {
            System.out.println(i);
        }
        System.out.println("\n Lower Case : ");
        for (char i = 'A'; i < 'Z'; i++ ) {
            char ch = (char)(i + 32);
            System.out.println(ch);
        }
    }
}