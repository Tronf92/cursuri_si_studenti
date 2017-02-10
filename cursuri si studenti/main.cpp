#include "student.h"

int main()
{
	list<Curs> cursuriAnul1Info;
	cursuriAnul1Info.push_back(Curs("P.O.O","Mircea Preda"));
	cursuriAnul1Info.push_back(Curs("Logica", "Mircea Preda"));

	Student* pS1= new Student("Andreea Stancu",&cursuriAnul1Info);
	Student* pS2=new Student("Marius Popa",&cursuriAnul1Info);

	pS1->InformatiiStudent();
	pS2->InformatiiStudent();
	delete pS1;
	delete pS2;

	cout<< "Cursuri Anul I Informatica " << endl;

	list<Curs>::const_iterator i;
	for(i = cursuriAnul1Info.begin();i!=cursuriAnul1Info.end();++i)
	{
		(*i).InformatiiCurs();
	}

	getchar();
	return 0;
}
