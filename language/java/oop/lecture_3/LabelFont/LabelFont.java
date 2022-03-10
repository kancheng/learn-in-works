import java.awt.*;
import javax.swing.*;
public class LabelFont extends JFrame {
    JLabel boldSmallLabel;
    JLabel italicSmallLabel;
    JLabel plainLargeLabel;
    JPanel panel;
    public LabelFont() {
        super("Font");
        Font boldSmallFont = new Font("Times New Roman", Font.PLAIN , 24);
        Font italicSmallFont = new Font("Arial Unicode MS", Font.ITALIC , 24);
        Font plainLargeFont = new Font("Times New Roman", Font.BOLD , 24);
        boldSmallLabel = new JLabel("Plain Small Font");
        italicSmallLabel = new JLabel("Italic Small Font");
        plainLargeLabel = new JLabel("Bold Large Font");
        boldSmallLabel.setFont(boldSmallFont);
        italicSmallLabel.setFont(italicSmallFont);
        plainLargeLabel.setFont(plainLargeFont);
        panel = new JPanel();
        setPreferredSize(new Dimension(400, 200));
        panel.add(boldSmallLabel);
        panel.add(italicSmallLabel);
        panel.add(plainLargeLabel);
        add(panel);
        pack();
        setVisible(true);
    }
    public static void main (String argv[]) {
        new LabelFont();
    }
}