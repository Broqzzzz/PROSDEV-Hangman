#include "PChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char PChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'p' ? c : defaultLetter;
}

PChecker::PChecker(){
	defaultLetter = '*';
}
