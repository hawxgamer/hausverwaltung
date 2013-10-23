///////////////////////////////////////////////////////////////////////////
// Workfile : Types.h
// Author : Mustafa Tunca
// Date :  [10/19/2013]
// ID: S1210306031
// Description :
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#ifndef TYPES_CLASS_H
#define TYPES_CLASS_H

#include <list>
#include <iterator>
#include <string>
#include "Floor.h"
#include <algorithm>

//address info
struct TAddress
{
	std::string street;
	unsigned int housenumber;
	unsigned int zipcode;
	std::string city;
};

typedef std::list<Floor> TFloorList;
typedef TFloorList::const_iterator TFloorListItor;

#endif
