//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

import java.net.URI;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.image.BufferedImage;
import javax.imageio.ImageIO;
import javax.swing.*;

public class BoardImagePane extends JComponent
{
    private static final long serialVersionUID = -4117866230565103567L;

    public BoardImagePane(URI boardImageURI, int x, int y, int width, int height)
    {
        setPreferredSize(new Dimension(width, height));

        _boardImageLoaded = false;
        try
        {
            _boardImage       = ImageIO.read(boardImageURI.toURL());
            _boardImageLoaded = true;
        }
        catch (Throwable throwable)
        {
        }
    }

    public void paintComponent(Graphics graphics)
    {
        super.paintComponent(graphics);

        Graphics2D graphics2D = (Graphics2D) graphics;
        if (_boardImageLoaded)
            graphics2D.drawImage(_boardImage, 0, 0, getWidth() - 1, getHeight() - 1, 0, 0, _boardImage.getWidth(), _boardImage.getHeight(), null);
        else
        {
            graphics2D.drawRect(0, 0, getWidth() - 1, getHeight() - 1);
            graphics2D.drawLine(0, 0, getWidth() - 1, getHeight() - 1);
            graphics2D.drawLine(0, getHeight() - 1, getWidth() - 1, 0);
        }
    }

    private boolean       _boardImageLoaded;
    private BufferedImage _boardImage;
}
