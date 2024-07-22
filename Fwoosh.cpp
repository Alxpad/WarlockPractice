#include "Fwoosh.h"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(){}

ASpell* Fwoosh::clone() const
{
	//Devolverá un puntero a un nuevo objeto "Fwoosh"
	return (new Fwoosh());
}




