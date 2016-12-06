#ifndef HASHTABLE_H
#define HASHTABLE_H

#include<cstdlib>
#include<iostream>
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
		string* get_Item(string Key);

};

#endif
