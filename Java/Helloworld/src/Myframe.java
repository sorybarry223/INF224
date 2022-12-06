import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.FlowLayout;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
public class Myframe extends JFrame implements ActionListener{

    JButton button=new JButton();
    JButton button1=new JButton();
    JButton button2=new JButton();
    JLabel label;

    JTextField textField=new JTextField();
    
    JTextArea textArea =new JTextArea(3,20);
    String newline = "\n";

    JMenuItem b1 = new JMenuItem("B1");
    JMenuItem b2 = new JMenuItem("B2");
    JMenuItem b3 = new JMenuItem("Exit");
        
    private static final long serialVersionUID = 1L;
    Myframe(){
       
        
        label=new JLabel();
        label.setBounds(150,250,150,150);
        label.setVisible(false);

        button.setBounds(10,10,250,100);
        button.addActionListener(this);
        button.setText("Button 1");
        button.setFocusable(false);
        button.setHorizontalTextPosition(JButton.CENTER);
        button.setVerticalTextPosition(JButton.BOTTOM);
        button.setFont(new Font("Comic Sans", Font.BOLD,50));
        button.setIconTextGap(-15);
        button.setForeground(Color.cyan);
        button.setBackground(Color.black);
        button.setBorder(BorderFactory.createEtchedBorder());

        //Button1
        button1.setBounds(300,10,250,100);
        button1.addActionListener(this);
        button1.setText("Button 2");
        button1.setFocusable(false);
        button1.setHorizontalTextPosition(JButton.CENTER);
        button1.setVerticalTextPosition(JButton.BOTTOM);
        button1.setFont(new Font("Comic Sans", Font.BOLD,50));
        button1.setIconTextGap(-15);
        button1.setForeground(Color.cyan);
        button1.setBackground(Color.black);
        button1.setBorder(BorderFactory.createEtchedBorder());

        //Button2
        button2.setBounds(600,10,250,100);
        button2.addActionListener(this);
        button2.setText("Close");
        button2.setFocusable(false);
        button2.setHorizontalTextPosition(JButton.CENTER);
        button2.setVerticalTextPosition(JButton.BOTTOM);
        button2.setFont(new Font("Comic Sans", Font.BOLD,50));
        button2.setIconTextGap(-15);
        button2.setForeground(Color.cyan);
        button2.setBackground(Color.black);
        button2.setBorder(BorderFactory.createEtchedBorder());

        
        

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //closes the frame
        this.setLayout(null);
        //Textzones
        textField.setPreferredSize(new Dimension(250,50));
        textField.setBounds(300,150,300,50);
        textArea.setPreferredSize(new Dimension(550,50));
        textArea.setBounds(300,250,300,100);
        textArea.setEditable(false);
        new JScrollPane(textArea);

        //Menubars
        JMenuBar menuBar=new JMenuBar();
        JMenu fileMenu = new JMenu("File");
        JMenu editMenu = new JMenu("Edit");
        JMenu helpMenu = new JMenu("Help");

        

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);


        fileMenu.add(b1);
        fileMenu.add(b2);
        fileMenu.add(b3);

        menuBar.add(fileMenu);
        menuBar.add(editMenu);
        menuBar.add(helpMenu);
        this.setJMenuBar(menuBar);
        this.add(textField);
        this.add(textArea);
        this.pack();
        this.setSize(500,500);//Sets the x-dimension and y-dimension of frame
        this.setVisible(true);//Make frame visible 
        this.add(button);
        this.add(button1);
        this.add(button2);
        this.add(label);

    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==button || e.getSource()==button1 || e.getSource()==b1 || e.getSource()==b2){
           // System.out.println("poo");
           // button.setEnabled(false);
           String text = textField.getText();
            textArea.append(text + newline);
            textField.selectAll();
            label.setVisible(true);
        }
        
         if(e.getSource()==button2 || e.getSource()==b3){
            System.exit(0);
         }
         
    }
     
}
