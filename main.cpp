#include <iostream>
#include "database.h"

using namespace std;

Database db = Database();

int main()
{
	cout << "version v.0.0.1" << endl;
	cout << "start app" << endl;

	db.Add(10);
	db.Add(20);
	db.Add(30);
	db.Add(99);
	db.Add(55);

	db.Add(77);
	db.Add(1);
	db.Add(2);
	db.Add(3);
	db.Add(4);

	db.PrintAll();

	return 0;
}