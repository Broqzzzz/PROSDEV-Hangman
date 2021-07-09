#include "EChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char EChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'e' ? c : defaultLetter;
}

EChecker::EChecker(){
	defaultLetter = '*';
}
