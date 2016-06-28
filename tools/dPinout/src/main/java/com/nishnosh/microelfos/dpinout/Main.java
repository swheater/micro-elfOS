//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

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
 
                        BoardPane boardPane = new BoardPane(null, 0, 0, 100, 100);
                        frame.getContentPane().add(boardPane);
 
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

