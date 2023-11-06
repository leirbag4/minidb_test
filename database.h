#ifndef _DATABASE_H
#define _DATABASE_H

#include <iostream>

using namespace std;

class Database
{

	public:
		Database();
		void Add(uint8_t data);
		void PrintAll();

	private:
		int index = 0;
		uint8_t BUFFER[10];
		const int SIZE = 10;
};

#endif


