#include "CChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char CChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'c' ? c : defaultLetter;
}

CChecker::CChecker(){
	defaultLetter = '*';
}
