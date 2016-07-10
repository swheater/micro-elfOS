//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout.spec;

public class Pin
{
    public Pin()
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

    public String getPinRef()
    {
        return _pinRef;
    }

    public void setPinRef(String pinRef)
    {
        _pinRef = pinRef;
    }

    private String _label;
    private String _pinRef;
}