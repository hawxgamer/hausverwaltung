///////////////////////////////////////////////////////////////////////////
// Workfile : Floor.h
// Author : Mustafa Tunca
// Date :  [10/19/2013]
// ID: S1210306031
// Description :
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#ifndef FLOOR_CLASS_H
#define FLOOR_CLASS_H
#include <list>
#include <iterator>
#include "Object.h"

//forward declaration
//class Flat;

//typedefs for list of flats and iterator for flat list
//typedef std::list<Flat*> TFlatList;
//typedef TFlatList::const_iterator TFlatListItor;


class Floor: public Object
{
public:
	size_t GetNrFlat() const;
	virtual void Print() const;
	void SetNrFlat(size_t const & nrFlat);
	Floor& operator =(Floor const & c);
	Floor (const Floor & cFloor);
	Floor();
	virtual ~Floor();
	//void AddFlat(Flat const &flat);


private:
	size_t mNrFlat;
	//TFlatList mFlatList;


};

std::ostream & operator<< (std::ostream &o,const Floor & c);

#endif
