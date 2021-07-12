#pragma once
#include "contributer.h"
#include "participant.h"
class instructor :
    public contributer
{

private: int count = 0;
public:
    instructor(string h, string h2, int h3);
    void print();
    void assign_task(contributer* k);
    
};

