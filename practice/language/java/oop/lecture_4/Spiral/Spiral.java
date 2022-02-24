import javax.swing.*;
import java.awt.*;
import java.util.Random;
class PolygonPanel extends JPanel {
    public PolygonPanel() {
        setBackground(Color.white);
        setPreferredSize(new Dimension(300, 400));
    }
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        int cx = getWidth() / 2;
        int cy = getHeight() / 2;
        double l = (cx < cy)?(double)cx:(double)cy;
        int oldX = (int)(cx + 1);
        int temX = oldX;
        int oldY = cy;
        double angle = 0;
        for (; l > 0; l -= 0.5) {
            int x = (int)(cx + l * Math.cos(angle));
            int y = (int)(cy - l * Math.sin(angle));
             //g.drawLine(oldX, oldY, x, y);
             if (oldY != cy || oldX != temX) {
                g.drawLine(oldX, oldY, x, y);
             }
            oldX = x;
            oldY = y;
            angle += 2 * Math.PI/36;
        }
    }
}
public class Spiral {
    public static void main(String[] a) {
        JFrame frame = new JFrame("Sin and Cos");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        PolygonPanel panel = new PolygonPanel();
        frame.getContentPane().add(panel);
        frame.pack();
        frame.setVisible(true);
    }
}
