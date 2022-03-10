import javax.swing.*;
import java.awt.*;
import java.util.Random;
class PolygonPanel extends JPanel {
    public PolygonPanel() {
        setBackground(Color.white);
        setPreferredSize(new Dimension(400, 300));
    }
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        int cx = getWidth() / 2;
        int cy = getHeight() / 2;
        int l = cx / 2;
        int oldX = cx + 1;
        int oldY = cy;
        double angle = 0;
        int n = 3;
        for (int i = 0; i < n + 1; i++) {
            int x = (int)(cx + l * Math.cos(angle));
            int y = (int)(cy - l * Math.sin(angle));
            g.setColor(Color.black);
            g.drawLine(oldX, oldY, x, y);
            g.setColor(Color.red);
            g.drawLine( cx, cy, x, y);
            g.drawString("p"+ (i + 1), x, y);
            oldX = x;
            oldY = y;
            angle += 2 * Math.PI/n;
        }
    }
}
public class Polygon {
    public static void main(String[] a) {
        JFrame frame = new JFrame("Sin and Cos");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        PolygonPanel panel = new PolygonPanel();
        frame.getContentPane().add(panel);
        frame.pack();
        frame.setVisible(true);
    }
}
