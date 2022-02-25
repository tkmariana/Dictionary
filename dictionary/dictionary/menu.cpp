
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <string>
#include <map>
#include "hash.h"
#include <iomanip>

//using namespace std;

int menu();
char lenChoice();
void optionOne();
void optionTwo();
void optionThree();
void optionFour();
void optionFive();
void optionSix();
void optionSeven();
void optionEight();
void optionNine();
void optionTen();
void optionEleven();
void optionTwelve();
void optionThirteen();
void optionFourteen();
void optionFiveteen();
void optionSixteen();
void optionSeventeen();
void readFile(std::string);
void lower_string(std::string);
hash hashy;

int main(int argc, char** argv) {

	for (;;) {

		char choice = menu();
		switch (choice)
		{
		case 1:
			optionOne();
			std::cout << "File created";
			std::cout << std::endl;
			system("pause");
			break;
		case 2:
			optionTwo();
			break;
		case 3:
			optionThree();
			break;
		case 4:
			optionFour();
			break;
		case 5:
			optionFive();
			break;
		case 6:
			optionSix();
			break;
		case 7:
			optionSeven();
			break;
		case 8:
			optionEight();
			break;
		case 9:
			optionNine();
			break;
		case 10:
			optionTen();
			break;
		case 11:
			optionEleven();
			break;
		case 12:
			optionTwelve();
			break;
		case 13:
			optionThirteen();
			break;
		case 14:
			optionFourteen();
			break;
		case 15:
			optionFiveteen();
			break;
		case 16:
			optionSixteen();
			break;
		case 17:
			optionSeventeen();
			break;
		default:
			break;

		}
	}
	return 0;
}
int menu() {
	int choice;

	system("cls");

	std::cout << "---------Dictionary----------" << std::endl;
	std::cout << "1. Create the word list" << std::endl;
	std::cout << "2. German, French, Latin, Hebrew to English noun " << std::endl;
	std::cout << "3. German, French, Latin, Hebrew to English verbs" << std::endl;
	std::cout << "4. German, French, Latin, Hebrew to English prepositions" << std::endl;
	std::cout << "5. German, French, Latin, Hebrew to English adjectives" << std::endl;
	std::cout << "6. German, French, Latin, Hebrew to English adverbs" << std::endl;
	std::cout << "7. German, French, Latin, Hebrew to English cardinal numbers" << std::endl;
	std::cout << "8. German, French, Latin, Hebrew to English all" << std::endl;
	std::cout << "9. English to (German, French, Latin, Hebrew) nouns" << std::endl;
	std::cout << "10. English to (German, French, Latin, Hebrew) verbs" << std::endl;
	std::cout << "11. English to (German, French, Latin, Hebrew) prepositions" << std::endl;
	std::cout << "12. English to (German, French, Latin, Hebrew) adjectives" << std::endl;
	std::cout << "13. English to (German, French, Latin, Hebrew) adverbs" << std::endl;
	std::cout << "14. English to (German, French, Latin, Hebrew) cardinal numbers" << std::endl;
	std::cout << "15. English to (German, French, Latin, Hebrew) all" << std::endl;
	std::cout << "16. Search for a word in one lenguage and return other lenguages" << std::endl;
	std::cout << "17. Quit " << std::endl;
	std::cout << "Enter your choice: ";
	std::cout << std::endl;
	std::cin >> choice;
	while ((choice > 17) || (choice < 0) || std::cin.fail()) // if purchase is not valid, keep doing this until it is valid.
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "The value you choose is incorrect, please choose again: ";
		std::cout << std::endl;
		std::cin >> choice;
	}
	return choice;

}


void optionOne() {

	//std::string d = "hebrew";
	//writeFile(d);
	readFile("hebrew");
	readFile("german");
	readFile("french");
	readFile("latin");

}

void optionTwo() {
	//char len = lenChoice();
	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTable("noun", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTable("noun", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTable("noun(m)", "latin");
		hashy.findInTable("noun(f)", "latin");
		hashy.findInTable("noun(n)", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTable("noun(m)", "hebrew");
		hashy.findInTable("noun(f)", "hebrew");
		system("pause");
		break;
	default:
		break;
	}

}
void optionThree() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTable("verb", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTable("verb", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTable("verb", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTable("verb", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionFour() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTable("preposition", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTable("preposition", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTable("preposition", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTable("preposition", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionFive() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTable("adjective/adverb", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTable("adjective", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTable("adjective", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTable("adjective(m)", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionSix() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTable("adjective/adverb", "german");
		hashy.findInTable("adverb", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTable("adverb", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTable("adverb", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTable("adverb", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionSeven() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTable("cardinal number", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTable("cardinal number", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTable("cardinal number", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTable("cardinal number", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionEight() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTable("noun", "german");
		hashy.findInTable("verb", "german");
		hashy.findInTable("preposition", "german");
		hashy.findInTable("adverb", "german");
		hashy.findInTable("adjective/adverb", "german");
		hashy.findInTable("cardinal number", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTable("noun", "french");
		hashy.findInTable("verb", "french");
		hashy.findInTable("preposition", "french");
		hashy.findInTable("adjective", "french");
		hashy.findInTable("adverb", "french");
		hashy.findInTable("pronoun", "french");

		system("pause");
		break;
	case'3':
		hashy.findInTable("noun(m)", "latin");
		hashy.findInTable("noun(f)", "latin");
		hashy.findInTable("noun(n)", "latin");
		hashy.findInTable("verb", "latin");
		hashy.findInTable("preposition", "latin");
		hashy.findInTable("adjective", "latin");
		hashy.findInTable("adverb", "latin");
		hashy.findInTable("conjunction", "latin");
		hashy.findInTable("pronoun", "latin");


		system("pause");
		break;
	case'4':
		hashy.findInTable("noun(m)", "hebrew");
		hashy.findInTable("noun(f)", "hebrew");
		hashy.findInTable("verb", "hebrew");
		hashy.findInTable("adjective(m)", "hebrew");
		hashy.findInTable("adverb", "hebrew");

		system("pause");
		break;
	default:
		break;
	}
}
void optionNine() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTableEnglish("noun", "german");

		system("pause");
		break;
	case'2':
		hashy.findInTableEnglish("noun", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTableEnglish("noun(m)", "latin");
		hashy.findInTableEnglish("noun(f)", "latin");
		hashy.findInTableEnglish("noun(n)", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTableEnglish("noun(m)", "hebrew");
		hashy.findInTableEnglish("noun(f)", "hebrew");

		system("pause");
		break;
	default:
		break;
	}
}
void optionTen() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTableEnglish("verb", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTableEnglish("verb", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTableEnglish("verb", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTableEnglish("verb", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionEleven() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTableEnglish("preposition", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTableEnglish("preposition", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTableEnglish("preposition", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTableEnglish("preposition", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionTwelve() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTableEnglish("adjective/adverb", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTableEnglish("adjective", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTableEnglish("adjective", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTableEnglish("adjective(m)", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionThirteen() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTableEnglish("adverb", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTableEnglish("adverb", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTableEnglish("adverb", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTableEnglish("adverb", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionFourteen() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTableEnglish("cardinal number", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTableEnglish("cardinal number", "french");
		system("pause");
		break;
	case'3':
		hashy.findInTableEnglish("cardinal number", "latin");
		system("pause");
		break;
	case'4':
		hashy.findInTableEnglish("cardinal number", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionFiveteen() {

	char c = lenChoice();
	switch (c)
	{
	case'1':
		hashy.findInTableEnglish("noun", "german");
		hashy.findInTableEnglish("verb", "german");
		hashy.findInTableEnglish("preposition", "german");
		hashy.findInTableEnglish("adjective/adverb", "german");
		hashy.findInTableEnglish("adverb", "german");
		hashy.findInTableEnglish("cardinal number", "german");
		system("pause");
		break;
	case'2':
		hashy.findInTableEnglish("noun", "french");
		hashy.findInTableEnglish("verb", "french");
		hashy.findInTableEnglish("preposition", "french");
		hashy.findInTableEnglish("adjective", "french");
		hashy.findInTableEnglish("adverb", "french");

		system("pause");
		break;
	case'3':
		hashy.findInTableEnglish("noun(m)", "latin");
		hashy.findInTableEnglish("noun(f)", "latin");
		hashy.findInTableEnglish("noun(n)", "latin");
		hashy.findInTableEnglish("verb", "latin");
		hashy.findInTableEnglish("preposition", "latin");
		hashy.findInTableEnglish("adjective", "latin");
		hashy.findInTableEnglish("adverb", "latin");

		system("pause");
		break;
	case'4':
		hashy.findInTableEnglish("noun(m)", "hebrew");
		hashy.findInTableEnglish("noun(f)", "hebrew");
		hashy.findInTableEnglish("verb", "hebrew");
		hashy.findInTableEnglish("adjective(m)", "hebrew");
		hashy.findInTableEnglish("adverb", "hebrew");
		system("pause");
		break;
	default:
		break;
	}
}
void optionSixteen() {
	std::string word;
	std::cout << "Please enter a word: ";
	std::cout << std::endl;
	std::cin.ignore();
	getline(std::cin, word);
	
	hashy.findWord("noun", word);
	hashy.findWord("noun(m)", word);
	hashy.findWord("noun(f)", word);
	hashy.findWord("noun(n)", word);
	hashy.findWord("verb", word);
	hashy.findWord("preposition", word);
	hashy.findWord("adjective", word);
	hashy.findWord("adverb", word);
	hashy.findWord("adjective/adverb", word);
	hashy.findWord("cardonal number", word);
	hashy.findWord("pronoun", word);
	hashy.findWord("adjective(m)", word);
	hashy.findWord("conjunction", word);
	system("pause");

}
void optionSeventeen() {
	exit(0);
}
char lenChoice() {
	char c;
	system("CLS");
	std::cout << " choose a lenguage 1-4: " << std::endl;
	std::cout << " 1- German" << std::endl;
	std::cout << " 2- French" << std::endl;
	std::cout << " 3- Latin" << std::endl;
	std::cout << " 4- Hebrew" << std::endl;
	c = _getch();
	return c;
}


void readFile(std::string l) {
	//map<string, string, char, string> list;

	std::string fileName;
	std::string line;
	std::string lenguage, word, partS, meaning;


	int size[15];
	fileName = l + ".txt";
	std::ifstream f(fileName);


	if (f.is_open())
	{

		//std::cout << std::setw(15) << l << std::setw(20) << "part speech" << std::setw(15) << "English" << std::endl;


		while (f)
		{

			getline(f, word);
			getline(f, partS);
			getline(f, meaning);

			//std::cout << std::setw(15) << word << std::setw(20) << partS << std::setw(15) << meaning  << std::endl;
		

			hashy.AddItem(partS, word, meaning, l);


		}

		f.close();

	}

}

