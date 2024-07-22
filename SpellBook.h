#pragma once
#include "ASpell.h"
#include <vector>
using namespace std;

class ASpell;

class SpellBook
{
public:
	vector<ASpell*>spellsInBook;
	SpellBook();
	virtual ~SpellBook();

	//SpellBook(const SpellBook &other) = delete; // Constructor de copia eliminado
	//SpellBook& operator = (const SpellBook& other) = delete; // Constructor de asignación eliminado
	
	void learnSpell(ASpell* newSpell); // Copia spell en el libro

	void forgetSpell(string const& spellName); // Borra Spell del libro, salvo si no está
	ASpell* createSpell(string const& spellName); // Recibe un nombre, crea el hechizo, y lo devuelve.
};


