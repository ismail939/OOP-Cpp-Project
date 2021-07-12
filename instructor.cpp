#include "instructor.h"
#include "participant.h"

instructor::instructor(string name,string id,int no):contributer::contributer(name,id,no){}//initialization list
void instructor::print() {//printing the info of an instructor
	cout << "Instructor,";
	contributer::print();
}
void instructor::assign_task(contributer* k) {
	participant* isPartIcipant = dynamic_cast<participant*>(k);//if the object pointed to is a participant then we are good!
	if (isPartIcipant)k->incrementTask();
	else cout << "Invalid one" << endl;
}
