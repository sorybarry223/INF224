 import java.awt.Color;
import java.awt.Font;

import javax.swing.BorderFactory;
import javax.swing.border.Border;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.ImageIcon;
public class Main {
    public static void main(String[] args) {
      ImageIcon image=new ImageIcon("logo-2.png");
      Border border=BorderFactory.createLineBorder(Color.green,3);

      JLabel label =new JLabel(); //create a label
      label.setText("Bro, let's cooooooooooooooode");  //set text of label
      label.setIcon(image);
      label.setHorizontalTextPosition(JLabel.CENTER);//set text of label
      label.setVerticalTextPosition(JLabel.TOP);
      label.setForeground(Color.green);
      label.setFont(new Font("MV Boli",Font.PLAIN,20));
      label.setIconTextGap(100);
      label.setBackground(Color.black);
      label.setOpaque(true);
      label.setBorder(border);
      label.setVerticalAlignment(JLabel.CENTER);//set vertical position of icon+text within the label
      label.setHorizontalAlignment(JLabel.CENTER);
      //label.setBounds(100,100,250,250); //set x and y position within frame as well as dimensions

      JFrame frame=new JFrame();//creates a frame
      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //closes the frame
      //frame.setSize(420,420);//Sets the x-dimension and y-dimension of frame
      //frame.setLayout(null);
      frame.add(label);
      label.setVisible(true);
      frame.setVisible(true);//Make frame visible
      frame.pack();
    }
}
