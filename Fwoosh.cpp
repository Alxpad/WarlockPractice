#include "Fwoosh.h"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(){}

ASpell* Fwoosh::clone() const
{
	//Devolver� un puntero a un nuevo objeto "Fwoosh"
	return (new Fwoosh());
}




