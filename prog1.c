#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	srand(time(NULL));

	int myrand = rand() % 11;

	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if(myrand > 4 && myrand <= 9) {
		printf("FRODO LIVES\n");
	} else if(myrand == 10) {
		printf("Karn is the best roguelike\n");
	} else{
		return 0;
	}

	printf("The random number was: %d\n", myrand);

	return 0;
}

