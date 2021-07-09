#include "HChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char HChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'h' ? c : defaultLetter;
}

HChecker::HChecker(){
	defaultLetter = '*';
}

