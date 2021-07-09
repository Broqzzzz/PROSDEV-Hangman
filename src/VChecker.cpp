#include "VChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char VChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'v' ? c : defaultLetter;
}

VChecker::VChecker(){
	defaultLetter = '*';
}
