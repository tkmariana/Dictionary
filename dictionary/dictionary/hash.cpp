
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>


#include "hash.h"



hash::hash() {
	for (int i = 0; i < tableSize; i++) {
		HashTable[i] = new words;
		HashTable[i]->pS = "empty";
		HashTable[i]->word = "empty";
		HashTable[i]->meaning = "empty";
		HashTable[i]->lenguage = "empty";
		HashTable[i]->next = NULL;

	}
}
void hash::AddItem(std::string pS, std::string word, std::string meaning, std::string lenguage) {
	int index = Hash(pS);
	if (HashTable[index]->pS == "empty")
	{
		HashTable[index]->pS = pS;
		HashTable[index]->word = word;
		HashTable[index]->meaning = meaning;
		HashTable[index]->lenguage = lenguage;

	}
	else
	{
		words* ptr = HashTable[index];
		words* n = new words;
		n->pS = pS;
		n->word = word;
		n->meaning = meaning;
		n->lenguage = lenguage;
		n->next = NULL;
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = n;
	}
}

int hash::Hash(std::string key)
{
	int hash = 0;
	int index;

	for (int i = 0; i < key.length(); i++) {
		hash = (hash + (int)key[i]) * 3;
	}

	index = hash % tableSize;
	return index;
}
void hash::prinTable() {
	int number;
	for (int i = 0; i < tableSize; i++) {
		//	number = numberOfItemsInIndex(i);
		std::cout << "index = " << i << std::endl;

		std::cout << HashTable[i]->pS << std::endl;
		std::cout << HashTable[i]->word << std::endl;
		std::cout << HashTable[i]->meaning << std::endl;
		std::cout << HashTable[i]->lenguage << std::endl;

		//std::cout << "number of items " << number << std::endl;
		std::cout << std::endl;
	}

}
void hash::findInTable(std::string pS, std::string l) {
	int index = Hash(pS);
	bool foundPs = false;
	std::string w;
	std::string ps;
	std::string m;

	words* ptr = HashTable[index];
	while (ptr != NULL) {
		if (ptr->pS == pS && ptr->lenguage == l) {
			foundPs = true;

			w = ptr->word;
			ps = ptr->pS;
			m = ptr->meaning;

			std::cout << std::setw(15) << w << std::setw(20) << ps << std::setw(15) << m << "." << std::endl;

		}
		ptr = ptr->next;
	}
	if (foundPs == false) {

		//std::cout << noun << std::endl;
		std::cout << pS << " no found in the Dictionary" << std::endl;
	}

}

void hash::findInTableEnglish(std::string pS, std::string l) {
	int index = Hash(pS);
	bool foundPs = false;
	std::string w;
	std::string ps;
	std::string m;

	words* ptr = HashTable[index];
	while (ptr != NULL) {
		if (ptr->pS == pS && ptr->lenguage == l) {
			foundPs = true;

			w = ptr->word;
			ps = ptr->pS;
			m = ptr->meaning;


			std::cout << std::setw(15) << m<< std::setw(20) << ps << std::setw(15) << w << "." << std::endl;

		}
		ptr = ptr->next;
	}
	if (foundPs == false) {

		std::cout << pS << " no found in the Dictionary" << std::endl;
	}

}
void hash::findWord(std::string Ps, std::string search) {
	int index = Hash(Ps);
	bool foundWord = false;
	std::string w;
	std::string ps;
	std::string m;

	words* ptr = HashTable[index];
	while (ptr != NULL) {


		if (ptr->word == search || ptr->meaning == search) {
			foundWord = true;

			w = ptr->word;
			ps = ptr->pS;
			m = ptr->meaning;
			std::cout << std::setw(15) << m << std::setw(20) << ps << std::setw(15) << w << "." << std::endl;

		}
		ptr = ptr->next;
	}


}

