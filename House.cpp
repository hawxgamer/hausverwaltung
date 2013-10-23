///////////////////////////////////////////////////////////////////////////
// Workfile : House.cpp
// Author : Mustafa Tunca
// Date :  [10/19/2013]
// ID: S1210306031
// Description : implementation of class House
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#include "House.h"
#include "Object.h"
#include <iostream>
#include "Types.h"
#include <iterator>

using namespace std;

// ----------------------------------------------------------
// CTor / DTor	/operator overloading
// ----------------------------------------------------------
House::House():mNrFloors(1)
{
}

House::~House()
{
}

House::House(const House & cFloor)
{
	mNrFloors=cFloor.mNrFloors;
	mAddress=cFloor.mAddress;
	copy (cFloor.mFLoors.begin(),cFloor.mFLoors.end(),back_inserter(mFLoors) );
}

House& House::operator =(House const & cfloor)
{
	//check for self-assignment
	if(this!=&cfloor)
	{
		mNrFloors=cfloor.mNrFloors;
		mAddress=cfloor.mAddress;
		copy (cfloor.mFLoors.begin(),cfloor.mFLoors.end(),back_inserter(mFLoors) );
	}
	return *this;
}
// ----------------------------------------------------------
// methods
// ----------------------------------------------------------

void House::SetAddress(TAddress const & address)
{
	mAddress=address;
}

TAddress House::GetAddress() const
{
	return mAddress;
}

size_t House::GetNrFloors() const
{
	return mFLoors.size();
}


void House::AddFloor(const Floor &  flobj)
{
	mFLoors.push_back(flobj);
	mNrFloors++;
}
void House::Print(std::ostream&out) const
{
	out <<"House:" <<mAddress.housenumber << " " << mAddress.housenumber
		<< " " << ", " << mAddress.zipcode << " " << mAddress.city << ", " << mFLoors.size() << " floors\n";


	copy(mFLoors.begin(),mFLoors.end(),ostream_iterator<Floor>(out, " "));
}