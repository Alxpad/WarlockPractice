#pragma once
#include "ASpell.h"

class Fwoosh :
    public ASpell
{
public:
    Fwoosh();
    ~Fwoosh();

    virtual ASpell* clone() const;
    
};

