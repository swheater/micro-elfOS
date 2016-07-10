//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout.spec;

import java.util.List;

public class PinGroup
{
    public PinGroup()
    {
    }

    public String getLabel()
    {
        return _label;
    }

    public void setLabel(String label)
    {
        this._label = label;
    }

    public String getLabelBackground()
    {
        return _labelBackground;
    }

    public void setLabelBackground(String labelBackground)
    {
        _labelBackground = labelBackground;
    }

    public String getLabelForground()
    {
        return _labelForground;
    }

    public void setLabelForground(String labelForground)
    {
        _labelForground = labelForground;
    }

    public List<PinLabel> getPinLabels()
    {
        return _pinLabels;
    }

    public void setPinLabels(List<PinLabel> pinLabels)
    {
        _pinLabels = pinLabels;
    }

    private String         _label;
    private String         _labelBackground;
    private String         _labelForground;
    private List<PinLabel> _pinLabels;
}