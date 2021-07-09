#include "GChecker.h"

//override the function "checkMyLetter"
//create the function definition here

char GChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'g' ? c : defaultLetter;
}

GChecker::GChecker(){
	defaultLetter = '*';
}
