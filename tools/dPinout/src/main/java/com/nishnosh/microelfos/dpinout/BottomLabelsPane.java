//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;

import javax.swing.*;

public class BottomLabelsPane extends JComponent
{
    private static final long serialVersionUID = -8124680560467371282L;

    public BottomLabelsPane(int height)
    {
        setMinimumSize(new Dimension(0, height));
        setMaximumSize(new Dimension(Integer.MAX_VALUE, height));
    }

    public void paintComponent(Graphics graphics)
    {
        super.paintComponent(graphics);

        graphics.setColor(Color.RED);
        graphics.drawRect(0, 0, getWidth() - 1, getHeight() - 1);
        graphics.drawLine(0, 0, getWidth() - 1, getHeight() - 1);
        graphics.drawLine(0, getHeight() - 1, getWidth() - 1, 0);
    }
}
