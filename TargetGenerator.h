#pragma once
#include <vector>
#include "ATarget.h"

class TargetGenerator
{
public:

	TargetGenerator();
	virtual ~TargetGenerator();

	void learnTargetType(ATarget*);
	void forgetTargetType(string const&);
	ATarget* createTarget(string const&);

	vector<ATarget*>targets;
};

