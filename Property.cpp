/*
 * Property.cpp
 *
 *  Created on: Jan 24, 2014
 *      Author: haho
 */
#include "Property.h"

using namespace std;

Property::Property( const std::string id) {
	this->id = id;
}

Property::~Property() {
	id = "";
}


