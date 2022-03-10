import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;
public class DrawClock extends JFrame implements ActionListener {
    private JButton button;
    private JPanel panel;
    private int height = 300, width = 300;
    public static void main (String[] argv) {
        DrawClock frame = new DrawClock();
        frame.setSize(520, 350);
        frame.createGUI();
        frame.setVisible(true);
    }
    private void createGUI() {
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        Container window = getContentPane();
        window.setLayout(new FlowLayout());
        panel = new JPanel();
        panel.setPreferredSize(new Dimension(width, height));
        panel.setBackground(Color.white);
        window.add(panel);
        button = new JButton("Circle");
        window.add(button);
        button.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e) {
        draw();
    }
    private void draw() {
        Graphics paper = panel.getGraphics();
        paper.setColor(Color.white);
        paper.fillRect( 0, 0, width, height);
        paper.setColor(Color.black);
        int px = width, py = height / 2;
        for (double a = 0.0; a < Math.PI * 2; a += 0.01) {
            int x = width/2 + (int)(width/2 * Math.cos(a));
            int y = height/2 - (int)(width/2 * Math.sin(a));
            paper.drawLine( px, py, x, y);
            px = x;
            py = y;
        }
        for (int i = 1; i <= 60; i += 1) {
            if (i % 5 == 0) {
                drawMin(paper, i, 15, Color.red);
            } else {
                drawMin(paper, i, 10, Color.blue);
            }
        }
    }
    private void drawMin(Graphics paper, int min, int l, Color color) {
        int radius = (int)(width / 2);
        int leng = (int)(radius * 0.9);
        double angle = Math.PI / 2 - min * 2 * Math.PI / 60;
        int x1 = (int)(radius + leng * Math.cos(angle));
        int y1 = (int)(radius + leng * Math.sin(angle));
        leng -= 1;
        int x2 = (int)(radius + leng * Math.cos(angle));
        int y2 = (int)(radius + leng * Math.sin(angle));
        paper.setColor(color);
        paper.drawLine( x1, y1, x2, y2);
        for (int i = 0; i < 50000000; i++) ;
    }
}