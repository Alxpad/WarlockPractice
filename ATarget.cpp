#include "ATarget.h"

using namespace std;

ATarget::ATarget(string& type):type(type) {}

ATarget::~ATarget(){}

void ATarget::getHitBySpell(ASpell& spell)
{

	cout << this->getType() << " has been " << spell.getEffects() << endl;
	
}

const string& ATarget::getType() const
{
	return this->type;
}



