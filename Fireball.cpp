#include "Fireball.h"

Fireball::Fireball() : ASpell("Fireball", "Quemado hasta las cenizas") {}

Fireball::~Fireball() {}

ASpell* Fireball::clone() const
{
	//Devolver� un puntero a un nuevo objeto "Fwoosh"
	return (new Fireball());
}



