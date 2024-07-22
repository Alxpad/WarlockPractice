#include "Polymorph.h"

Polymorph::Polymorph() : ASpell("Polymorph", "Convertido en oveja") {}

Polymorph::~Polymorph() {}

ASpell* Polymorph::clone() const
{
	return (new Polymorph());
}



