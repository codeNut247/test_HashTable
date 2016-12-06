#include <iostream>
#include <cstdlib>
#include <string>

#include "HashTable.h"

using namespace std;

int main() 
{
	HashTable ht;
	
	ht.addItem("Maria", "Orange Wonder");
	ht.addItem("Marinko", "White Russian");
	ht.addItem("Richard", "Pied Piper");
	ht.addItem("Erlic", "Mocacino");
	ht.addItem("Gilfoyl", "Tara");
	ht.addItem("Gaven", "Gared");
	ht.addItem("Bighead", "Danesh");
	
	string input;

	cin >> input;

	string* target = ht.get_Item("Marinko");
	cout << "Order: " + target[1] << endl;

	//ht.printTable();
	
	return 0;
}
