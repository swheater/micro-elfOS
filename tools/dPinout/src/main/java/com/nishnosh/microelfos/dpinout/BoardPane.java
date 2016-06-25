//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

import java.io.File;
import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.*;

public class BoardPane extends JComponent
{
    public BoardPane(File imageFile, int x, int y, int width, int height)
    {
    }

    public void paintComponent(Graphics graphics)
    {
        super.paintComponent(graphics);

        Graphics2D graphics2D = (Graphics2D) graphics;
    }

    private int image;
}
