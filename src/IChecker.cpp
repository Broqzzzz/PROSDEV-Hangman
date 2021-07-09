#include "IChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char IChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'i' ? c : defaultLetter;
}

IChecker::IChecker(){
	defaultLetter = '*';
}


