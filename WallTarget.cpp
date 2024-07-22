#include "WallTarget.h"

using namespace std;

string tipoWall = "Muro de ladrillo común";

WallTarget::WallTarget() : ATarget(tipoWall) {}

WallTarget::~WallTarget() {}

ATarget* WallTarget::clone() const {
	return (new WallTarget());
}


