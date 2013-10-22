///////////////////////////////////////////////////////////////////////////
// Workfile : Object.cpp
// Author : Mustafa Tunca
// Date :  [10/19/2013]
// ID: S1210306031
// Description : implementation of class Object
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#include "Object.h"
using namespace std;

// ----------------------------------------------------------
// CTor / DTor
// ----------------------------------------------------------
Object::Object(){}

Object::~Object()
{
	cout <<"Destroying base class " << this << "\n";
}

Object::Object(const Object & obj) {}

void Object::Print() const
{
	std::cout<<this <<"is the adress of the base class!\n";
}

// ----------------------------------------------------------
// methods
// ----------------------------------------------------------

Object & Object :: operator =( Object const & oSrc )
	 {
		 return * this ;
		 }