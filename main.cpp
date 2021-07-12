#include <iostream>
#include "student_activity.h"
#include "contributer.h"
#include "instructor.h"
#include "participant.h"
using namespace std;
int main()
{
	student_activity Energia;//creating an object of type student_activity
	contributer* Instructor1 = new instructor("Yassin","220",5);
	contributer* Instructor2 = new instructor("Omar", "232", 3);
	contributer* Participant1 = new participant("Zeina", "238", 3);
	contributer* Participant2 = new participant("Yasmin", "230", 4);
	contributer* Participant3 = new participant("Ahmed", "249", 6);
	Energia.addContributer(Instructor1);
	Energia.addContributer(Instructor2);
	Energia.addContributer(Participant1);
	Energia.addContributer(Participant2);
	Energia.addContributer(Participant3);
	Energia.printInfo();
	Instructor1->assign_task(Participant1);
	cout << "........................." << endl;
	Energia.printInfo();
	Participant3->assign_task(Participant1);
	Energia.dropContributer(3);
	cout << "........................." << endl;
	Energia.printInfo();
	delete Instructor1;
	delete Instructor2;
	delete Participant1;
	delete Participant2;
	delete Participant3;
}