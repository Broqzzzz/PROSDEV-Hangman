/********************************************************
* Main entry point for Hangman
* includes the game loop and the basic print info
* 
* Created by: Dennis Li (dennis.li@ubisoft.com)
********************************************************/

#include <time.h>
#include "Puzzle.h"
#include "LetterFunction.h"

int drawhangman(int x){
	if( x == 0){
			printf(" +----+ \n");
			printf(" |      \n");
			printf(" | \n");
			printf(" | \n");
			printf(" |      \n");
			printf(" |      \n");
			printf("============= \n");
	}
		
	if(x==1){
			printf(" +----+ \n");
			printf(" |    |  \n");
			printf(" | \n");
			printf(" | \n");
			printf(" |      \n");
			printf(" |      \n");
			printf("============= \n");
		}
	if( x == 1){
			printf(" +----+ \n");
			printf(" |    |  \n");
			printf(" |    O\n");
			printf(" | \n");
			printf(" |      \n");
			printf(" |      \n");
			printf("============= \n");
	}
		if( x == 2){
			printf(" +----+ \n");
			printf(" |    |  \n");
			printf(" |    O\n");
			printf(" |    |\n");
			printf(" |      \n");
			printf(" |      \n");
			printf("============= \n");
		}
			if( x == 3){
			printf(" +----+ \n");
			printf(" |    |  \n");
			printf(" |    O \n");
			printf(" |   /| \n");
			printf(" |      \n");
			printf(" |      \n");
			printf("============= \n");
			}
				if( x == 4){
			printf(" +----+ \n");
			printf(" |    |  \n");
			printf(" |    O \n");
			printf(" |   /|\\ \n");
			printf(" |      \n");
			printf(" |      \n");
			printf("============= \n");
				}
			if( x == 5){
			printf(" +----+ \n");
			printf(" |    |  \n");
			printf(" |    O \n");
			printf(" |   /|\\ \n");
			printf(" |   /  \n");
			printf(" |      \n");
			printf("============= \n");	
			}
				if( x == 6){
			printf(" +----+ \n");
			printf(" |    |  \n");
			printf(" |    O \n");
			printf(" |   /|\\ \n");
			printf(" |   / \\  \n");
			printf(" |      \n");
			printf("============= \n");	
			}
}
int main(int argc, char** argv)
{	
	srand(time(NULL));
	Puzzle p("dictionary_many.txt");	
	std::string strInput;
	// p.displayWordList();                      //uncomment to see the word list loaded for the game
	LetterFunction *lf = new LetterFunction();
	int tries = 0;
		system("cls");
		
	while(p.isGame())
	{	
//		system("cls");	
		p.initPuzzle();
		tries=0;
		drawhangman(tries);
		system("cls");
						
		while (p.isGame() && p.isAlive() && !p.isWin() )
		{
	
//			drawhangman(tries);
			system("cls");
			std::cout << std::string(75, '\n');	
			drawhangman(tries);
			std::cout << "Hangman! Current Lives: " << p.getLives() << " | wins: "<< p.getWins() << " | losses: " << p.getLosses() << "\n\n";
			p.displayPuzzleString();
			p.displayBoard();
			std::cout <<"Guess a letter > ";
			std::cin >> strInput;
				
			
			if(strInput.size() == 1) //single char input
			{
				char cInput = lf->check(strInput[0]);
				
				if(p.isInBoard(cInput))
				{
					int ansIndex = p.findInAnswer(cInput);
					system("cls");
					if(ansIndex == std::string::npos) //wrong letter
					{
						system("cls");
						p.loseLife();
						system("cls");
						tries +=1;
						
					}
					else //right letter
					{
						system("cls");
						p.openPuzzle(ansIndex);
					}
				}
				else
				{
					p.loseLife();
					tries += 1;
					//no longer in board					
				}				
			}
			else //multi char input
			{
				if(strInput == "quit" || strInput == "exit")
				{				
					p.endGame();
				}
				else 
				{
					std::cout << "invalid input!" << std::endl;
				}
			}
			
			if(p.isWin())
			{
				p.addWin();
				std::cout << "\nCongratulations, you correctly guessed the word [" << p.getAnswer() << "]!"<< std::endl;
				system("pause");
			}
			else if (!p.isAlive())
			{
				p.addLoss();
				std::cout << "\nSorry, the correct word is [" << p.getAnswer() << "]!" << std::endl;
				drawhangman(tries);
				system("pause");
			}
		}			
	}	
	delete lf;
	
	return 0;
}
