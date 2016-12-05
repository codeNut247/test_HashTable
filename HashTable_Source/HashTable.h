#ifndef HASHTABLE_H
#define HASHTABLE_H

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class HashTable
{
	private:
		int static const TableSize = 10;
		struct Item{string name; string drink; Item* next;};
		Item* Table[TableSize];
	public:
		HashTable();
		int Hash(string key);
		void addItem(string Name, string Drink);
		int NumberOfItems(int index);
		void printTable();

};

#endif
