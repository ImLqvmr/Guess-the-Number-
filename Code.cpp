#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
	int num;
	int guess;
	int tries;
	int numtry;
	std::string pag;
	
	std::cout << "Please choose number of tries you would like to have: ";
	std::cin >> numtry;
	
	srand(time(0));
	num = (rand() % 100) + 1;
	
	std::cout << "*****************Number Guessing Game*****************" << '\n';
	std::cout << '\n';

do{
	

		std::cout << "Guess a number between 1-100 :";
		std::cin >> guess;
		
		tries++;
 
if(tries <= numtry){
		if(guess > num){
		
	std::cout << "Too High! " << '\n';
	}

    else if(guess < num){
    	
    	std::cout << "Too Low! " << '\n';
	}
		
	else{
		
		std::cout << "CORRECT MAN!" << "    Tries taken = " << tries << '\n';
	
	}
	
	
}
else{
	std::cout << "Your tries are OVER!" << '\n';
	break;
}

	

	
	std::cout << '\n';
std::cout << "                 ******************************************************                       ";
	
   return 0;	
}
