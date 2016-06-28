//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

import java.io.File;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.image.BufferedImage;
import javax.swing.*;


public class BoardPane extends JComponent
{
    public BoardPane(File boardImageFile, int x, int y, int width, int height)
    {
        setSize(100, 100);
        _boardImageLoaded = false;
        _boardImage       = null;
    }

    public void paintComponent(Graphics graphics)
    {
        super.paintComponent(graphics);

        Graphics2D graphics2D = (Graphics2D) graphics;
        if (_boardImageLoaded)
            graphics2D.drawImage(_boardImage, 0, 0, null);
        else
        {
            graphics2D.drawRect(0, 0, getWidth() - 1, getHeight() - 1);
            graphics2D.drawLine(getWidth() - 1, 0, 0, getHeight() - 1);
            graphics2D.drawLine(0, getHeight() - 1, getWidth() - 1, 0);
        }
    }

    private boolean       _boardImageLoaded;
    private BufferedImage _boardImage;
}
