#include "ZChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char ZChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'z' ? c : defaultLetter;
}

ZChecker::ZChecker(){
	defaultLetter = '*';
}
