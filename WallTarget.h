#pragma once
#include "ATarget.h"
class WallTarget :
    public ATarget
{
public:
    WallTarget();
    ~WallTarget();

    ATarget* clone() const;
};

