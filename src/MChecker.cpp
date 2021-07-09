#include "MChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char MChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'm' ? c : defaultLetter;
}

MChecker::MChecker(){
	defaultLetter = '*';
}

