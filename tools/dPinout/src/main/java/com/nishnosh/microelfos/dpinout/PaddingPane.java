//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import javax.swing.*;

public class PaddingPane extends JComponent
{
    private static final long serialVersionUID = -1156457949797512031L;

    public PaddingPane()
    {
        setMaximumSize(new Dimension(0, 0));
        setMaximumSize(new Dimension(Integer.MAX_VALUE, Integer.MAX_VALUE));
    }

    public void paintComponent(Graphics graphics)
    {
        super.paintComponent(graphics);

        graphics.setColor(Color.GRAY);
        graphics.drawRect(0, 0, getWidth() - 1, getHeight() - 1);
        graphics.drawLine(0, 0, getWidth() - 1, getHeight() - 1);
        graphics.drawLine(0, getHeight() - 1, getWidth() - 1, 0);
    }
}
