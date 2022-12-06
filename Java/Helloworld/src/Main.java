 import java.awt.Color;
import java.awt.Font;

import javax.swing.BorderFactory;
import javax.swing.border.Border;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.ImageIcon;
public class Main {
    public static void main(String[] args) {
      
      ImageIcon icon =new ImageIcon("logo.png");

      JLabel label= new JLabel();
      label.setText("Hello world");
      label.setIcon(icon); 
     // label.setVerticalAlignment(JLabel.TOP);
     // label.setHorizontalAlignment(JLabel.RIGHT);
      label.setBounds(100,100,75,75);

      JPanel redpanel =new JPanel();
      redpanel.setBackground(Color.red);
      redpanel.setBounds(0,0,250,250);
      redpanel.setLayout(null);
      JPanel bluepanel =new JPanel();
      bluepanel.setBackground(Color.blue);
      bluepanel.setBounds(250,0,250,250);
      
      JPanel greenpanel =new JPanel();
      greenpanel.setBackground(Color.green);
      greenpanel.setBounds(0,250,500,250);
      //greenpanel.setLayout(new BorderLayout());

      JFrame frame=new JFrame();//creates a frame
      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //closes the frame
      frame.setSize(720,720);//Sets the x-dimension and y-dimension of frame
      frame.setLayout(null);
      frame.setVisible(true);//Make frame visible
      redpanel.add(label);
      frame.add(redpanel);
      frame.add(bluepanel);
      frame.add(greenpanel);
    }
}
