#include "DChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char DChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'd' ? c : defaultLetter;
}

DChecker::DChecker(){
	defaultLetter = '*';
}
