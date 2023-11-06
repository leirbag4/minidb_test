#include <iostream>
#include "database.h"

using namespace std;

Database db = Database();

int main()
{
	cout << "version v.0.0.1" << endl;
	cout << "start app" << endl;

	for(int a = 0; a < 10; a++)
	{
		cout << "val: " << int(a) << endl;
	}

	return 0;
}