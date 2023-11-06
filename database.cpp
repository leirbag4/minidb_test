#include "database.h"

Database::Database()
{
	index = 0;
}

void Database::Add(uint8_t data)
{
	BUFFER[index++] = data;
}

void Database::PrintAll()
{
	for(int a = 0; a < SIZE; a++)
		cout << "data " << int(a) << ": " << int(BUFFER[a]) << endl;
}
