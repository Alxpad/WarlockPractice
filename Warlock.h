#pragma once
#include <iostream>
#include <string>
#include "ASpell.h"
#include "ATarget.h"
#include <vector>
#include "SpellBook.h"
using namespace std;

/*Forma de Coplien
1. Tipos públicos
2. Constructores
3. Destructor
4. Operadores
5. Métodos públicos
6. Accesores
7. Tipos privados
8. Métodos privados
9. Accesores privados
*/

class Warlock
	//No puede ser copiado, instanciado por copia, o instanciado sin nombre/título
{
public:
	//1
	SpellBook* libro; //libro se crea con SpellBook
	//2

	Warlock(string name, string title);
	//3
	~Warlock();
	//4
	
	//5
	const void wakeup() const;
	const void goodbye() const;
	const void introduce() const;
	void setTitle(const string& newTitle);
	

	//6
	const string* getName() const;
	const string* getTitle() const;

	void learnSpell(ASpell *newSpell);
	void forgetSpell(string &spellName);
	void launchSpell(string spellName, ATarget &spellTarget);

	vector<ASpell*>spells;


private:
	//7

	string name;
	string title;
	//8
	
	//9
	


};