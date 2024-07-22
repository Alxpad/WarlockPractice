#pragma once
#include "ASpell.h"

class Fireball :
    public ASpell
{
public:
    Fireball();
    virtual ~Fireball();

    virtual ASpell* clone() const;

private:

protected:


};

