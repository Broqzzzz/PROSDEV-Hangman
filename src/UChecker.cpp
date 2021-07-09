#include "UChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char UChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'u' ? c : defaultLetter;
}

UChecker::UChecker(){
	defaultLetter = '*';
}
