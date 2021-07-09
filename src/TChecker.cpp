#include "TChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char TChecker::checkMyLetter(char inputChar){
	char c = tolower(inputChar);
	return c == 't' ? c : defaultLetter;
}

TChecker::TChecker(){
	defaultLetter = '*';
}
