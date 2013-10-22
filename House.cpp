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

using namespace std;

// ----------------------------------------------------------
// CTor / DTor
// ----------------------------------------------------------
House::House():mNrFloors(0)
{
}

House::~House()
{
	mFLoors.clear();

}
/*

Floor* House::Pred(Floor const * pFloor)
{
	if (pFloor!=0)
		return pFloor->GetNrFlat();
}*/

House::House(const House & cFloor)
{
	std::copy ( cFloor.mFLoors.begin(),cFloor.mFLoors.end(), mFLoors.begin() );
}

House& House::operator =(House const & c)
{
	copy ( (*this).mFLoors.begin(),(*this).mFLoors.end(), mFLoors.begin() );
	return *this;
}
// ----------------------------------------------------------
// methods
// ----------------------------------------------------------

void House::SetAddress(TAddress & address)
{
	mAddress=address;
}

TAddress House::GetAddress() const
{
	cout << mAddress.street << mAddress.housenumber << ","
		<< mAddress.zipcode << mAddress.city << "\n";
	return mAddress;
}

size_t House::GetNrFloors() const
{
	cout << mNrFloors << "floors \n";
	return mNrFloors;
}

void House::SetNrFloors(size_t const & nrfloors)
{
	mNrFloors=nrfloors;
}

void House::AddFloor(const Floor &  flobj)
{
		mFLoors.push_back(flobj);
	mNrFloors++;
}
void House::Print() const
{
	copy(mFLoors.begin(),mFLoors.end(),ostream_iterator<Floor>(std::cout, " "));
}