#include "TargetGenerator.h"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* newTarget)
{
	this->targets.push_back(newTarget);
}

void TargetGenerator::forgetTargetType(string const &targetType) {
	int counter = 0;
	for (ATarget* t : this->targets) {
		if (t->getType() == targetType) {
			this->targets.erase(this->targets.begin() + counter);
			break;
		}
		counter++;
	}
}

ATarget* TargetGenerator::createTarget(string const& targetType)
{

	for (auto t : this->targets) {
		if (t->getType() == targetType) {
			t->clone();
			break;
		}
	}
	return nullptr;
	
}
