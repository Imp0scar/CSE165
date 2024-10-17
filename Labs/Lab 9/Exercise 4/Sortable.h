#ifndef SORTABLE_H
#define SORTABLE_H


#include "Data.h"
#include <vector>
#include <iostream>

class Sortable {
public:
	virtual bool compare( const Sortable* ) const = 0;
	virtual void print() const = 0;
};

#endif