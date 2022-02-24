import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class ButtonAction extends JFrame {
    private JButton button;
    private JPanel panel;
    public ButtonAction () {
        super("HelloWorld");
        setBounds( 100, 100, 400, 200);
        button = new JButton("Click Here");
        button.addActionListener(new ButtonListener());
        panel = new JPanel();
        panel.add(button);
        add(panel);
        panel.setPreferredSize(new Dimension(300, 100));
        setVisible(true);
    }
    private class ButtonListener implements ActionListener {
        public void actionPerformed (ActionEvent event) {
            String text = button.getText();
            setTitle(text);
        }
    }
    public static void main (String argv[]) {
        new ButtonAction();
    }
}