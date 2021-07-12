#pragma once
#include "contributer.h"
#include "instructor.h"
class participant :
    public contributer
{
private:int count = 0;
public:
    participant(string name, string id, int no);
    void print();
    void assign_task(contributer* k);
};

