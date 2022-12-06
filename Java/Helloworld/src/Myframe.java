import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
public class Myframe extends JFrame implements ActionListener{

    JButton button=new JButton();
    JLabel label;
    Myframe(){
       
        ImageIcon icon=new ImageIcon("logo.png");
        
        label=new JLabel();
        label.setIcon(icon);
        label.setBounds(150,250,150,150);
        label.setVisible(false);

        button.setBounds(200,100,250,100);
        button.addActionListener(this);
        button.setText("Clik me");
        button.setFocusable(false);
       // button.setIcon(icon);
        button.setHorizontalTextPosition(JButton.CENTER);
        button.setVerticalTextPosition(JButton.BOTTOM);
        button.setFont(new Font("Comic Sans", Font.BOLD,50));
        button.setIconTextGap(-15);
        button.setForeground(Color.cyan);
        button.setBackground(Color.black);
        button.setBorder(BorderFactory.createEtchedBorder());

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //closes the frame
        this.setLayout(null);
        this.setSize(500,500);//Sets the x-dimension and y-dimension of frame
        this.setVisible(true);//Make frame visible 
        this.add(button);
        this.add(label);

    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==button){
            //System.out.println("poo");
           // button.setEnabled(false);
           label.setVisible(true);
        }
    }
     
}
