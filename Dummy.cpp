#include "Dummy.h"

using namespace std;
string tipo = "Practice Dummy";
Dummy::Dummy() : ATarget(tipo) {}

Dummy::~Dummy(){}

ATarget* Dummy::clone() const{
	return (new Dummy());
}


