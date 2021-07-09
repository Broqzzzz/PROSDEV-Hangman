#include "SChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char SChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 's' ? c : defaultLetter;
}

SChecker::SChecker(){
	defaultLetter = '*';
}
