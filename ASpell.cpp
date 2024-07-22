#include "ASpell.h"


using namespace std;

ASpell::ASpell(const string& name, const string& effects): name(name),effects(effects){}

ASpell::~ASpell(){}

const string ASpell::getName() const
{
	return this->name;
}

const string ASpell::getEffects() const
{
	return this->effects;
}

void ASpell::launch(ATarget &target)
{
	target.getHitBySpell(*this);
}












