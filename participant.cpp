#include "participant.h"
#include <string>
participant::participant(string name, string id, int no) :contributer::contributer(name, id, no) {}
//Using the initialization list to store the values


void participant::assign_task(contributer* k) {
	cout << "A participant can not assign a task to another participant" << endl;
}

void participant::print() {
	cout << "Participant ";
	contributer::print();
}