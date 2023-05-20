//package Play.Java;

import javax.swing.*;
import java.io.*;
import java.awt.*;



public class SimpleForm extends JFrame{
    private JPanel panel1;
    public SimpleForm()
    {
        setTitle("My new GUI Form");
        setPreferredSize(new Dimension(500,400));
        setContentPane(new JPanel());
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        pack();
        setLocationRelativeTo(null);//για να εμφανίζεται πάντα στο κέντρο της οθόνης
        setVisible(true);
    }

public static void main(String[] args) {
    new SimpleForm();


}

}