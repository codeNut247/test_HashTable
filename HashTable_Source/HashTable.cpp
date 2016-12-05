#include<iostream>
#include<cstdlib>
#include<string>

#include"HashTable.h"

using namespace std;

HashTable::HashTable()
{
	for(int i = 0; i < TableSize;i++)
	{
		Table[i] = new Item;
		Table[i]->name = "empty";
		Table[i]->drink = "empty";
		Table[i]->next = NULL;
	}
}

/*static Item HashTable::getItem(string Name)
{
	Item* item = Table[Hash(Name)];
	while (item->name != Name)
	{
		item = item->next;
	}
	
	return item;

}*/

void HashTable::printTable()
{
	int number;

	for(int i = 0; i < TableSize; i++)
	{
		number = NumberOfItems(i);
		cout << "-------------------------\n";
		cout << "Row: " << i << endl;
		cout << "Items: " << number << endl;
		cout << "Name: " << Table[i]->name << endl;
		cout << "Ordered Drink: " << Table[i]->drink << endl;
		cout << "-------------------------\n";
	}

}

int HashTable::NumberOfItems(int index)
{
	int number = 0;
	
	Item* ptr = Table[index];
	
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		number++;
	}

	return number;
}

void HashTable::addItem(string Name, string Drink)
{
	int index = Hash(Name);

	if(Table[index]->name == "empty")
	{
		Table[index]->name = Name;	
		Table[index]->drink = Drink;	
	}else
	{
		Item* ptr = Table[index];
		Item* tupel = new Item;
		tupel->name = Name;
		tupel->drink = Drink;
		tupel->next = NULL;

		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = tupel;
	}
}

int HashTable::Hash(string key)
{
	int index = 0;

	for(int i = 0; i < key.length(); i++)
	{
		index = index + (int)key[i];		
	}

	index = index % TableSize;
	
	return index;
}
