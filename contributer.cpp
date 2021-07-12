#include "contributer.h"
#include "instructor.h"
#include "participant.h"
contributer::contributer(string n,string idd,int no):name{n},id{idd},no_of_tasks{no}{}
//initialization list
void contributer::incrementTask() {
	no_of_tasks++;
}
void contributer::setName(string u) {
	name = u;
}
void contributer::setId(string h) {
	id = h;
}
void contributer::setTask(int y) {
	no_of_tasks = y;
}
string contributer::getName() {
	return name;
}
string contributer::getId() {
	return id;
}
int contributer::getNoOf() {
	return no_of_tasks;
}
 void contributer::print() {
	cout << name <<","<< id <<","<< no_of_tasks<<endl;
}
 void contributer::assign_task(contributer* k) {}
