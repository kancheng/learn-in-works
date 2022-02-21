public class StringProc {
    public static void main (String argv[]) {
        String str = "Hello World";
        int idx = str.indexOf(' ');
        String str1 = str.substring(0, idx);
        String str2 = str.substring(idx + 1);
        System.out.println("Original\tUpperCase\tLowerCase");
        System.out.println(str1 + "\t\t" + str1.toUpperCase() + "\t\t" + str1.toLowerCase());
        System.out.println(str2 + "\t\t" + str2.toUpperCase() + "\t\t" + str2.toLowerCase());

    }
}