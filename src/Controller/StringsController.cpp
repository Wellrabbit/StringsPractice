/*
 * StringsController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: eort3611
 */
#include "StringsController.h"
#include <iostream>
#include <string>
using namespace std;

string roryHalpMeh;

StringsController :: StringsController()
{
	roryHalpMeh = "for fffries";
}
void StringsController :: start()
{
	cout << roryHalpMeh.length() << endl;
	cout << roryHalpMeh[4] << endl;
	cout << roryHalpMeh.at(8) << endl;
	cout << roryHalpMeh.empty() << endl;
	cout << roryHalpMeh.substr(4,8) << endl;
	cout << roryHalpMeh.substr(6) << endl;
	cout << roryHalpMeh.compare("for fries") << endl;
}
