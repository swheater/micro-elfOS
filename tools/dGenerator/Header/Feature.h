#ifndef __FEATURE_H__
#define __FEATURE_H__

/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <string>

using namespace std;

class Feature
{
public:
    Feature(string name, bool abstract, Feature *basis);
    virtual ~Feature();

    string getName();
    void   setName(string name);

    bool getAbstract();
    void setAbstract(bool abstract);

    Feature* getBasis();
    void     setBasis(Feature* basis);

private:
    string   _name;
    bool     _abstract;
    Feature* _basis;
};

#endif
