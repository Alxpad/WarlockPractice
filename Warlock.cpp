#include "Warlock.h"


using namespace std;

//Warlock::Warlock(string& name, string& title): name(name), title(title){}

Warlock::Warlock(string name, string title)// : name(name), title(title)
{
	this->name = name;
	this->title = title;
	this->wakeup();
}

Warlock::~Warlock(){
	delete libro; // Libro se destruye con Warlock
}

const void Warlock::wakeup()const
{
	auto nombre = *this->getName();
	cout << nombre << ": " << "Parece que va a ser un dia aburrido." << endl;
}

const void Warlock::goodbye()const
{
	auto nombre = *this->getName();
	cout << nombre << ": " << "Mi trabajo ha terminado!" << endl;
}

const void Warlock::introduce()const
{
	cout << *this->getName() << ": " << "Soy " << *this->getName() << ", " << *this->getTitle() << endl;
}

void Warlock::setTitle(const string& newTitle)
{
	this->title = newTitle;
}

const string* Warlock::getName()const
{
	return &this->name;
}

const string* Warlock::getTitle() const 
{
	return &this->title;
}

void Warlock::learnSpell( ASpell* newSpell)
{
	this->spells.push_back(newSpell);
	libro->learnSpell(newSpell);
}

void Warlock::forgetSpell(string& spellName)
{
	int counter = 0;
	for (ASpell* s : this->spells) {
		if (s->getName() == spellName) {
			this->spells.erase(this->spells.begin() + counter);
			break;
		}
		counter++;
	}
	libro->forgetSpell(spellName);
}

void Warlock::launchSpell(string spellName, ATarget &spellTarget)
{
	//Usando spellbook
	for (ASpell* s : libro->spellsInBook) {
		if (s->getName() == spellName) {
			ASpell* launchedSpell = libro->createSpell(spellName);
			launchedSpell->launch(spellTarget);
		}
	}
	/*for (ASpell* s : this->spells) {
		if (s->getName() == spellName) {
			s->launch(spellTarget);
		}
	}*/
}



