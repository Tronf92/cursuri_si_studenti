#if !defined(__STUDENT_H__)
#define __STUDENT_H__

#include "curs.h"

class Student
{
public:
	Student(const string& nume, list<Curs>* pCursuri):_numeStudent(nume),_pListaCursuriUrmate(pCursuri)
	{
		cout << "Initializare instanta Student." << endl;
		cout << "Nume: " <<_numeStudent << endl;

	}
	~Student()
	{
		cout << "Eliminare instanta Student." << endl;
		cout << "Nume: " << _numeStudent << endl;

	}

	void InformatiiStudent() const
	{
		cout << "Nume student: " <<_numeStudent << endl;
		cout <<"Lista cursuri urmate:" << endl;
		list<Curs>::const_iterator i;
		for(i = _pListaCursuriUrmate->begin();i!=_pListaCursuriUrmate->end();++i)
		{
			(*i).InformatiiCurs();
		}
	}

private:
	string _numeStudent;
	list<Curs>* _pListaCursuriUrmate;

};


#endif