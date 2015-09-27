/*
 * Copyright (c) 2015, Stuart Wheater, Newcastle upon Tyne, England. All rights reserved.
 */

#include <string>
#include <Feature.h>

using namespace std;

Feature::Feature(string name, bool abstract, Feature *basis)
{
    _name     = name;
    _abstract = abstract;
    _basis    = basis;
}

Feature::~Feature()
{
}

string Feature::getName()
{
	return _name;
}

void Feature::setName(string name)
{
	_name = name;
}

bool Feature::getAbstract()
{
	return _abstract;
}

void Feature::setAbstract(bool abstract)
{
	_abstract = abstract;
}

Feature* Feature::getBasis()
{
	return _basis;
}

void Feature::setBasis(Feature* basis)
{
	_basis = basis;
}
