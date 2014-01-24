/*
 * TemplateTest.cpp
 *
 *  Created on: Jan 24, 2014
 *      Author: haho
 */
#include "PropertyHolder.h"
#include "iostream"
#include "Property.h"

using namespace std;

int main(int argc, char *argv[]) {
	cout << " start "<< "\n";
	cout.flush();
	PropertyHolder holder;
	holder.AddProperty("property1", "A");
	holder.AddProperty("property2", "B");
	holder.AddProperty("property3", "C");
	holder.AddProperty("property4", "D");

	Property property = holder.GetProperty("property1");
	cout << " property " << property.value.c_str() << "\n";
	cout.flush();
	return 0;
}


