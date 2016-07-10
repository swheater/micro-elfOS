//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout.spec;

import java.util.List;

public class PinLabel
{
    public PinLabel()
    {
    }

    public String getLabel()
    {
        return _label;
    }

    public void setLabel(String label)
    {
        _label = label;
    }

    public List<Pin> getPins()
    {
        return _pins;
    }

    public void setPins(List<Pin> pins)
    {
        _pins = pins;
    }

    private String    _label;
    private List<Pin> _pins;
}