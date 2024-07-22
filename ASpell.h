#pragma once
#include <string>
#include <iostream>
#include "ATarget.h"

using namespace std;

//Forward declaration muy recomendable cuando una clase se incluye en el header de otra
class ATarget; 

class ASpell
{
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

public:
	ASpell(const string &name, const string& effects);
	virtual ~ASpell();

	const string getName() const;
	const string getEffects() const;

	virtual ASpell* clone() const =0;
	void launch(ATarget &);

protected:
	string name;
	string effects;

private:
	
};

