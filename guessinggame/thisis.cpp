#include <cstdlib>

#include <iostream>

 
using namespace std;


int generate_random_number(){
	int max = 100;
	srand(time(0));
	char input;
	return rand() % max;


}

int main() {
	int number = generate_random_number();
	int num_guesses = 0;
	bool playing = true;
	while(playing == true){
		int guess;
		char letter;
		char yes = 'y' ;
		cout << "Enter a guess: ";
		cin >> guess;
		if(guess == number){
			cout << "Good job!" << num_guesses << "\n";
			cout<<"Do you wanna play agian\n";
			cin >> letter;
			if (!(letter == yes)){
				playing = false;
			}	

			}else{
			if(guess < number){
				cout << "higher\n";
			}
			else{
				cout << "lower\n";
			}
			num_guesses += 1;
		}
	}
}

	


