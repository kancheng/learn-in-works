import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
public class ReadFileToString {
    public static void main(String[] args) {
        String filePath = "File.txt";
        System.out.println( usingBufferedReader(filePath));
    }
 
    // Read file content into the string with - using BufferedReader and FileReader
    // You can use this if you are still not using Java 8
 
    private static String usingBufferedReader(String filePath) {
        StringBuilder contentBuilder = new StringBuilder();
        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String sCurrentLine;
            while ((sCurrentLine = br.readLine()) != null) {
                contentBuilder.append(sCurrentLine).append("\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return contentBuilder.toString();
    }
}

/* Reference
* https://howtodoinjava.com/java/io/java-read-file-to-string-examples/
*/