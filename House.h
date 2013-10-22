///////////////////////////////////////////////////////////////////////////
// Workfile : House.h
// Author : Mustafa Tunca
// Date :  [10/19/2013]
// ID: S1210306031
// Description :
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#ifndef HOUSE_CLASS_H
#define HOUSE_CLASS_H

#include <iostream>
#include "Object.h"


//forward declaration
class Floor;
//include after forward declaration of class, because we need the info of Floor class
#include "Types.h"

class House: public Object
{
public:
	House();
	virtual ~House();
	virtual void Print() const;
	TAddress GetAddress() const;
	void SetAddress(TAddress & address);
	size_t GetNrFloors() const;
	void SetNrFloors(size_t const & nrfloors);
	void AddFloor(const Floor &  flobj);
	House& operator =(House const & c);
	House (const House & cFloor);

private:
	TAddress mAddress;
	TFloorList mFLoors;
	size_t mNrFloors;
};

#endif