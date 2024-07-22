#include "Warlock.h"
#include "Fwoosh.h"
#include "Dummy.h"
#include "Fireball.h"
#include "Polymorph.h"
#include "WallTarget.h"
#include "TargetGenerator.h"

void test_1() {

	Warlock const richard("Richard", "Guardián del Magma");
	richard.introduce();
	std::cout << *richard.getName() << " - " << *richard.getTitle() << std::endl;

	Warlock* jack = new Warlock("Jack", "el Largo");
	jack->introduce();
	jack->setTitle("el Maravillas");
	jack->introduce();

	delete jack;
}

void test_2() {

	Warlock richard("Richard", "el Titulado");

	Dummy bob;
	Fwoosh* fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	string str_sp1 = "Fwoosh";
	richard.forgetSpell(str_sp1);
	richard.launchSpell("Fwoosh", bob);
	
	}

void test_3() {
		Warlock richard("Richard", "foo");
		richard.setTitle("Hola, soy Ricardo el Sabio!");
		WallTarget model1;

		Polymorph* polymorph = new Polymorph();
		TargetGenerator tarGen;

		tarGen.learnTargetType(&model1);
		richard.learnSpell(polymorph);

		Fireball* fireball = new Fireball();

		richard.learnSpell(fireball);

		ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

		richard.introduce();
		richard.launchSpell("Polymorph", *wall);
		richard.launchSpell("Fireball", *wall);
}

int main()
{
	//test_1();
	//test_2();
	test_3();


	return (0);
}