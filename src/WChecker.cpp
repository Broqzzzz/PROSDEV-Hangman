#include "WChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char WChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'w' ? c : defaultLetter;
}

WChecker::WChecker(){
	defaultLetter = '*';
}
