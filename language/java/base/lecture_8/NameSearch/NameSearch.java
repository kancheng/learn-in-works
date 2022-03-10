import java.io.*;
import java.util.*;
import java.io.File;
import java.util.Scanner;
public class NameSearch {
    public static void main(String[] args) throws IOException {
        int count = 0;
        try {
            String fileName = "name.txt";
            File file = new File(fileName);
            Scanner sc = new Scanner(file);
            while(sc.hasNextLine()) {
                sc.nextLine();
                count++;
            }
            System.out.println("============================");
            System.out.println("Total Number of Lines: " + count);
            System.out.println("============================");
            Scanner scan = new Scanner(new File(fileName));
            int i = 1;
            String name[] = new String[count + 1];
            while(scan.hasNextLine()){
                String line = scan.nextLine();
                name[i] = line;
                System.out.println(" " + i + " : "+ name[i]);
                i++;
            }
            sc.close();
        } catch (Exception e) {
            e.getStackTrace();
        }
    }
}