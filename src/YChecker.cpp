#include "YChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char YChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'y' ? c : defaultLetter;
}

YChecker::YChecker(){
	defaultLetter = '*';
}
