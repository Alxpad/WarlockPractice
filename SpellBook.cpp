#include "SpellBook.h"
#include <vector>
#include <iostream>
using namespace std;

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* newSpell)
{
	spellsInBook.push_back(newSpell->clone());
}

void SpellBook::forgetSpell(string const& spellName)
{
	int counter = 0;
	for (ASpell* s : this->spellsInBook) {
		if (s->getName() == spellName) {
			//Por cada lectura aumenta el contador. Luego,s e borra la posición correspondiente
			//al contador.
			delete s;
			this->spellsInBook.erase(this->spellsInBook.begin() + counter);
			return;
		}

		counter++;
	}
	return;
}

ASpell* SpellBook::createSpell(string const& spellName)
/*El método createSpell lo que hace es devolver una copia del hechizo buscado,
para interactuar con él*/
{
	for (auto s : this->spellsInBook) {
		if (s->getName() == spellName) {
			s->clone();
			break;
		}
	}

	return nullptr;
}
