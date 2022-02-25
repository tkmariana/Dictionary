

#include <cstdlib>
#include <iostream>
#include <string>
//using namespace std;

#ifndef HASH_H
#define HASH_H


class hash
{
private:
	static const int tableSize = 40;

	struct words {
		std::string pS;
		std::string word;
		std::string meaning;
		std::string lenguage;
		words* next;
	};

	words* HashTable[tableSize];
public:
	hash();
	int Hash(std::string key);
	void AddItem(std::string pS, std::string word, std::string meaning, std::string lenguage);
	//void PrintItemsInIndex(int index);
	void findInTable(std::string pS, std::string l);
	void findInTableEnglish(std::string pS, std::string l);
	void findWord(std::string word, std::string s);
	void prinTable();
	//void sortUsingHash(std::string a[], std::string n);
	//	int numberOfItemsInIndex(int index);
};


#endif

