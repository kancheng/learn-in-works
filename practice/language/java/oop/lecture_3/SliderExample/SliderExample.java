import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
public class SliderExample extends JFrame implements ChangeListener {
    private JSlider slider;
    private JLabel label;
    private JPanel panel;
    public SliderExample () {
        super("SliderExample");
        setBounds( 100, 100, 400, 200);
        slider = new JSlider(JSlider.HORIZONTAL, 0, 100, 50);
        slider.addChangeListener(this);
        label = new JLabel();
        panel = new JPanel();
        panel.setLayout(new GridLayout( 2, 1, 5, 5));
        panel.add(slider);
        panel.add(label);
        add(panel);
        panel.setPreferredSize(new Dimension(300, 100));
        setVisible(true);
    }
    public void stateChanged(ChangeEvent e) {
        int v = slider.getValue();
        label.setText("Slider value = " + v);
    }  
    public static void main(String[] args) {  
        new SliderExample();  
    }  
}