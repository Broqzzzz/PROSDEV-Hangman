#include "NChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char NChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'n' ? c : defaultLetter;
}

NChecker::NChecker(){
	defaultLetter = '*';
}
