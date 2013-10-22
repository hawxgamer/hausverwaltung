///////////////////////////////////////////////////////////////////////////
// Workfile : Floor.cpp
// Author : Mustafa Tunca
// Date :  [10/19/2013]
// ID: S1210306031
// Description : implementation of class Floor
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#include "Floor.h"

using namespace std;

// ----------------------------------------------------------
// CTor / DTor
// ----------------------------------------------------------
Floor::Floor()
{

}

Floor::~Floor()
{

}



Floor::Floor(const Floor & cFloor)
{
	mNrFlat=cFloor.mNrFlat;
}

// ----------------------------------------------------------
// methods
// ----------------------------------------------------------

size_t Floor::GetNrFlat() const
{
	return mNrFlat;
}

void Floor::SetNrFlat(size_t const & nrFlat) 
{
	mNrFlat=nrFlat;
}

ostream & operator<< (std::ostream &o,const Floor & c)
{
	c.Print();
	//o << "Flats amount" << c.GetNrFlat() << ",";
	return o;
}

void Floor::Print() const
{
	cout << "Flat amount" << mNrFlat <<endl <<endl;
}




Floor& Floor::operator =(const Floor & c )
{
//	(*this).mNrFlat=mNrFlat;
	return *this;
}




/*
void Floor::AddFlat(Flat const &flat)
{

}
*/
