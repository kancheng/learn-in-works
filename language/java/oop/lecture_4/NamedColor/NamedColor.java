// https://stackoverflow.com/questions/21800466/draw-with-lines-in-java
import javax.swing.*;
import java.awt.*;
import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JComponent;
import javax.swing.JFrame;

public class NamedColor {
    public static void main(String[] a) {
        JFrame window = new JFrame();
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setBounds(30, 30, 300, 300);
        window.getContentPane().add(new MyCanvas());
        window.setVisible(true);
      }
}

class MyCanvas extends JComponent {
    private static final long serialVersionUID = 1L;
    public void paint(Graphics g) {
        int i =0;
        for ( i = 0; i < 100; i++) {
            int x=1+i*3;
            g.drawLine(x, 200, 2+(x+(i/2)), 400-((i*i)/20));
        }
    }
}
