#if !defined(__CURS_H__)
#define __CURS_H__

#include <list>
#include <string>
#include <iostream>
using namespace std;


class Curs
{
public:
	Curs(const string& denumire, const string& profesor):_denumire(denumire),_numeProfesor(profesor){}

	void InformatiiCurs() const
	{
		cout << "Denumire curs:" << _denumire << "Profesor: " << _numeProfesor << endl;

	}
	
private:
	string _denumire;
	string _numeProfesor;

};



#endif