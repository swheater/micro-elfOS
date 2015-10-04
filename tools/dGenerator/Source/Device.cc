/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <string>
#include <Device.h>

using namespace std;

Device::Device(string name, bool abstract, Device *basis)
{
    _name     = name;
    _abstract = abstract;
    _basis    = basis;
}

Device::~Device()
{
}

string Device::getName()
{
    return _name;
}

void Device::setName(string name)
{
    _name = name;
}

bool Device::getAbstract()
{
    return _abstract;
}

void Device::setAbstract(bool abstract)
{
    _abstract = abstract;
}

Device* Device::getBasis()
{
    return _basis;
}

void Device::setBasis(Device* basis)
{
    _basis = basis;
}
