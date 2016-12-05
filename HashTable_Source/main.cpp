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
	ht.printTable();
	
	return 0;
}
