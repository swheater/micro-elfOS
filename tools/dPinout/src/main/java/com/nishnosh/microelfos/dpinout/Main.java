//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

import java.awt.Container;
import java.awt.Dimension;
import java.awt.GridLayout;
import java.net.URI;

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

                        Container  contentPane = frame.getContentPane();
                        GridLayout gridLayout  = new GridLayout(3, 3);
                        contentPane.setLayout(gridLayout);

                        PaddingPane      topLeftPaddingPane     = new PaddingPane();
                        TopLabelsPane    topLabelsPane          = new TopLabelsPane(64);
                        PaddingPane      topRightPaddingPane    = new PaddingPane();
                        LeftLabelsPane   leftLabelsPane         = new LeftLabelsPane(64);
                        BoardImagePane   boardImagePane         = new BoardImagePane(new URI("file:board.png"), 0, 0, 350, 130);
                        RightLabelsPane  rightLabelsPane        = new RightLabelsPane(64);
                        PaddingPane      bottomLeftPaddingPane  = new PaddingPane();
                        BottomLabelsPane bottomLabelsPane       = new BottomLabelsPane(64);
                        PaddingPane      bottomRightPaddingPane = new PaddingPane();

                        contentPane.add(topLeftPaddingPane);
                        contentPane.add(topLabelsPane);
                        contentPane.add(topRightPaddingPane);
                        contentPane.add(leftLabelsPane);
                        contentPane.add(boardImagePane);
                        contentPane.add(rightLabelsPane);
                        contentPane.add(bottomLeftPaddingPane);
                        contentPane.add(bottomLabelsPane);
                        contentPane.add(bottomRightPaddingPane);

                        contentPane.setPreferredSize(new Dimension(640,  480));

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

