#ifndef __DEVICE_H__
#define __DEVICE_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <string>

using namespace std;

class Device
{
public:
    Device(string name, bool abstract, Device *basis);
    virtual ~Device();

    string getName();
    void   setName(string name);

    bool getAbstract();
    void setAbstract(bool abstract);

    Device* getBasis();
    void    setBasis(Device* basis);

private:
    string  _name;
    bool    _abstract;
    Device* _basis;
};

#endif
