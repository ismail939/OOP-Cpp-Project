#include "student_activity.h"
#include "instructor.h"
student_activity::student_activity() {
	numOfContri = 0;
}
void student_activity::addContributer(contributer*c1) {
	arrayOfContri[numOfContri] = c1;
	numOfContri++;
	participant* isParticipant = dynamic_cast<participant*>(c1);
	//if the pointer of type contributer points to a participant isParticipant=1 else =0
	if (isParticipant)numOfPart++;//incrementing the number of participants 
	else numOfInst++;//incrementing the number of instructors
}
void student_activity::dropContributer(int index) {
	participant* iSSparticipant = dynamic_cast<participant*>(arrayOfContri[index]);
	if (iSSparticipant)numOfPart--;
	else numOfInst--;
	for (int i = index; i < numOfContri - 1; i++) {
		arrayOfContri[i] = arrayOfContri[i + 1];//every element stores the pointer saved in the next element  
	}
	arrayOfContri[numOfContri-1] = NULL;//the last array element points to nothing as the number of elements is decreased by one
	numOfContri--;
	
}
void student_activity::printInfo() {
	cout << "Number of participants is " << numOfPart << endl;
	cout << "Number of instructors is " << numOfInst << endl;
	for (int i = 0; i < numOfContri; i++) {
		arrayOfContri[i]->print();//printing the info of each contributer
	}
}
