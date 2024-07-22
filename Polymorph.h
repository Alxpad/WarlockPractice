#pragma once
#include "ASpell.h"

class Polymorph :
    public ASpell
{
public:
    Polymorph();
    virtual ~Polymorph();

    virtual ASpell* clone() const;

private:

protected:


};
