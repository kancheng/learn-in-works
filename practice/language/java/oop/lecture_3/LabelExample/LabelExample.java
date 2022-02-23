import java.awt.*;
import javax.swing.*;
public class LabelExample {
    public static void main (String argv[]) {
        JFrame frame = new JFrame("Label Example");
        frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        frame.setPreferredSize(new Dimension(350, 200));
        Container cp = frame.getContentPane();
        cp.setLayout(new BorderLayout(10, 10));
        JLabel label1 = new JLabel("First Label");
        JLabel label2 = new JLabel();
        String caption = label1.getText();
        label2.setText(caption.toUpperCase());
        cp.add(label1, BorderLayout.NORTH);
        cp.add(label2, BorderLayout.SOUTH);
        frame.setBackground(Color.blue);
        frame.pack();
        frame.setVisible(true);
    }
}