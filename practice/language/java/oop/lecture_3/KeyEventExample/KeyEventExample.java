import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class KeyEventExample implements KeyListener {
    public KeyEventExample() {
        JFrame frame = new JFrame();
        frame.setBounds( 100, 100, 100, 100);
        frame.addKeyListener(this);
        frame.setVisible(true);
    }
    public void keyPressed(KeyEvent event) {
        int code = event.getKeyCode();
        String s = event.getKeyText(code);
        System.out.println("KeyPressed : " + s + " " + code);
    }
    public void keyTyped(KeyEvent event) {
        char ch = event.getKeyChar();
        System.out.println("keyTyped : " + ch);
    }
    public void keyReleased(KeyEvent event) {
        int code = event.getKeyCode();
        String s = event.getKeyText(code);
        System.out.println("keyReleased : " + s + " " + code);
    }
    public static void main (String argv[]) {
        new KeyEventExample();
    }
}