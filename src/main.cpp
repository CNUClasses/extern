//============================================================================
// Name        : extern.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : externs are used to expose global variables to all files in a project
//============================================================================

#include <iostream>
using namespace std;

//where the extern'ed i is defined
#include "externs.h"
#include "incrementer.h"

int main() {
	//note that I can access i even though its not defined in this compilation unit!
	i++;
	increment();
	increment();
	cout << "i=" <<i<< endl; // 
}
