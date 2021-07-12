#ifndef CONTRIBUTER_H
#define CONTRIBUTER_H
 #include <iostream>
#include <string>
using namespace std;
class contributer
{private:
	string name, id;
	int no_of_tasks = 0;	
public:
	
	contributer(string, string, int);
	void incrementTask();
	void setName(string n);
	void setId(string iid);
	void setTask(int h);
	string getName();
	string getId();
	int getNoOf();
	virtual void print();
	virtual void assign_task(contributer* k);
};

#endif