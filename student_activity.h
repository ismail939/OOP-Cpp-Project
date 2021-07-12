#pragma once
#ifndef STUDENT_ACTIVITY_H
#define STUDENT_ACTIVITY_H
#include <iostream>
#include "contributer.h"
 
using namespace std;
class student_activity
{
private:
	contributer* arrayOfContri[40];
	int numOfContri;
	int numOfInst = 0; int numOfPart = 0;
public:
	student_activity();
	void addContributer(contributer*);
	void dropContributer(int);
	void printInfo();

};
#endif

