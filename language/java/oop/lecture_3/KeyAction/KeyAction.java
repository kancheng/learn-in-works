import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class KeyAction extends JFrame {
    private JTextField textField;
    private JLabel label;
    private JPanel panel;
    public KeyAction () {
        super("Key Example");
        setBounds(100, 100, 100, 100);
        textField = new JTextField("", 20);
       textField.addKeyListener(new KeyActionListener());
       //textField.addKeyListener(this);
        
        label = new JLabel("Title is the same as textField");
        panel = new JPanel();
        panel.setLayout(new GridLayout( 2, 1, 5, 5));
        panel.add(textField);
        panel.add(label);
        add(panel);
        panel.setPreferredSize(new Dimension(300, 100));
        setVisible(true);
    }

    private class KeyActionListener implements KeyListener {
        public void keyPressed(KeyEvent e) { }
        public void keyTyped(KeyEvent e) { }
        public void keyReleased(KeyEvent e) {
            label.setText(textField.getText());
        }        
    }
    public static void main (String argv[]) {
        new KeyAction();
    }
}