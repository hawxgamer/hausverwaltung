///////////////////////////////////////////////////////////////////////////
// Workfile : Object.h
// Author : Mustafa Tunca
// Date :  [10/19/2013]
// ID: S1210306031
// Description :
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#ifndef OBJECT_CLASS_H
#define OBJECT_CLASS_H

#include <iostream>

class Object
{
public:
	// destructor must me declared as virtual because if we delete from an
	// object pointer a derived class the destructor must be called from
	// that class
	virtual ~Object();
	virtual void Print() const;
protected:
	// hide all default CTors per default so no Object class can be created
	Object();
private:
	//hide also the Copy-Ctor
	Object (const Object & obj);
	//no assignment is allowed (also for inherit classes)
	Object& operator =( Object const & oSrc );
};

#endif
