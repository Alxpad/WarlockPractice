#pragma once
#include "ATarget.h"
class Dummy :
    public ATarget
{
public:
    Dummy();
    ~Dummy();
    
    ATarget* clone() const;
};

