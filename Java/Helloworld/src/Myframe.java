import javax.swing.JFrame;
import javax.swing.JFrame;
import java.awt.Color;

import javax.swing.ImageIcon;
public class Myframe extends JFrame{
    Myframe(){
       
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //closes the frame
        //frame.setResizable(false);//prevent frame from being resized
        this.setSize(420,420);//Sets the x-dimension and y-dimension of frame
        this.setVisible(true);//Make frame visible
        ImageIcon image =new ImageIcon("logo-2.png"); //create an image icon
        this.setIconImage(image.getImage());//change icon of frame
       // frame.getContentPane().setBackground(Color.green);//change background color
       this.getContentPane().setBackground(new Color(123,50,28));
    }
}
