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

int main() {
	cout << " start "<< "\n";
	cout.flush();
	PropertyHolder holder;
	holder.AddProperty("property1", "A");
	holder.AddProperty("property2", "B");
	holder.AddProperty("property3", "C");
	holder.AddProperty("property4", "D");

	//string property = holder.GetProperty("property1").value.c_str();
	//cout << " property " << property << "\n";
	cout.flush();
	return 0;
}


