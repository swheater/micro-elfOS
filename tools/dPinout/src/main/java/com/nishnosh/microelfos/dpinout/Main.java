//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

import java.awt.Container;
import java.io.File;
import javax.swing.*;

public class Main
{
    public static void main(String[] args)
    {
        javax.swing.SwingUtilities.invokeLater(new Runnable()
            {
                public void run()
                {
                    try
                    {
                        JFrame frame = new JFrame("dPinout");
                        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

                        BoardPane boardPane = new BoardPane(new File("board.png"), 0, 0, 100, 100);

                        Container contentPane = frame.getContentPane();
                        contentPane.setLayout(new SpringLayout());
                        contentPane.add(boardPane);

                        frame.pack();
                        frame.setVisible(true);
                    }
                    catch (Throwable throwable)
                    {
                        throwable.printStackTrace(System.err);
                    }
                }
            }
        );
    }
}

