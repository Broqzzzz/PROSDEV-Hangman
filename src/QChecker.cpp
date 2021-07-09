#include "QChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char QChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 'q' ? c : defaultLetter;
}

QChecker::QChecker(){
	defaultLetter = '*';
}
