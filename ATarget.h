#pragma once
#include <iostream>
#include "ASpell.h"
using namespace std;

//Forward declaration muy recomendable cuando una clase se incluye en el header de otra
class ASpell;

class ATarget
{

public:
	ATarget(string &type);
	~ATarget();

	void getHitBySpell(ASpell &spell);

	string type;

	const string& getType() const;
	virtual const ATarget* clone() const =0;
};

