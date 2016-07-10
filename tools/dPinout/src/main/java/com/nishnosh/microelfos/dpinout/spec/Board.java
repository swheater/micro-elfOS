//
// Copyright (c) 2015-2016, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
//

package com.nishnosh.microelfos.dpinout.spec;

import java.net.URI;
import java.util.List;
import java.util.Map;

public class Board
{
    public Board()
    {
    }

    public int getImageXOffset()
    {
        return _imageXOffset;
    }

    public void setImageXOffset(int imageXOffset)
    {
        _imageXOffset = imageXOffset;
    }

    public int getImageYOffset()
    {
        return _imageYOffset;
    }

    public void setImageYOffset(int imageYOffset)
    {
        _imageYOffset = imageYOffset;
    }

    public int getImageWidth()
    {
        return _imageWidth;
    }

    public void setImageWidth(int imageWidth)
    {
        _imageWidth = imageWidth;
    }

    public int getImageHeight()
    {
        return _imageHeight;
    }

    public void setImageHeight(int imageHeight)
    {
        _imageHeight = imageHeight;
    }

    public URI getImageSourceURI()
    {
        return _imageSourceURI;
    }

    public void setImageSourceURI(URI imageSourceURI)
    {
        _imageSourceURI = imageSourceURI;
    }

    public Map<String, Pin> getPinMap()
    {
        return _pinMap;
    }

    public void setPinMap(Map<String, Pin> pinMap)
    {
        _pinMap = pinMap;
    }

    public List<PinGroup> getPinGroups()
    {
        return _pinGroups;
    }

    public void setPinGroups(List<PinGroup> pinGroups)
    {
        _pinGroups = pinGroups;
    }

    private int              _imageXOffset;
    private int              _imageYOffset;
    private int              _imageWidth;
    private int              _imageHeight;
    private URI              _imageSourceURI;
    private Map<String, Pin> _pinMap;
    private List<PinGroup>   _pinGroups;
}