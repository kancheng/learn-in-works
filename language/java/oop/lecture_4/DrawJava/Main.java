// https://stackoverflow.com/questions/21800466/draw-with-lines-in-java
// https://www.796t.com/post/MmN2eDI=.html
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.Timer;

public class Main {
    public static void main(String[] a) {
        JFrame window = new JFrame();
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setResizable(false);
        window.getContentPane().add(new MyCanvas());
        window.pack();
        window.setVisible(true);
    }
}
class MyCanvas extends JPanel {
    int x1 = 0;
    int rotate = 50;
    List<Line> lines;
    Timer timer = null;
    public MyCanvas() {
        lines = new ArrayList<>();
        timer = new Timer(75, new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (rotate < -50) {
                    ((Timer) e.getSource()).stop();
                } else {
                    lines.add(new Line(x1, rotate));
                    repaint();
                    x1 += 5;
                    rotate--;
                }
            }
        });
        JButton start = new JButton("Start the Magic");
        start.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e) {
                timer.start();
            }
        });
        add(start);
    }
    public Dimension getPreferredSize() {
        return new Dimension(502, 400);
    }
    private static final long serialVersionUID = 1L;
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.BLACK);
        g.fillRect(0, 0, getWidth(), getHeight());
        for (Line line : lines) {
            line.drawLine(g);
        }
    }
    class Line {
        int x1;
        int rotate;
        int y1 = 200;
        public Line(int x1, int rotate) {
            this.x1 = x1;
            this.rotate = rotate;
        }
        void drawLine(Graphics g) {
            int Radius = (int) (Math.min(getWidth(), getHeight()) * 0.4);
            int sLength = (int) (Radius * 0.9);
            int xSecond = (int) (x1 + sLength * Math.sin(rotate * (2 * Math.PI / 100)));
            int ySecond = (int) (y1 - sLength * Math.cos(rotate * (2 * Math.PI / 100)));
            g.setColor(Color.GREEN);
            g.drawLine(x1, y1, xSecond, ySecond);
        }
    }
}