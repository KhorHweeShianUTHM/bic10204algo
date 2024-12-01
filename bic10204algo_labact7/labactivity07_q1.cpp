#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessGame(); /* function prototype */

int main()
{
	srand(time(NULL)); /* seed random number generator */
	guessGame();
	return 0; /* indicate successful termination */
} /* end main */
	
/* guessGame generates numbers between 1 and 1000 and checks user's guess */
void guessGame()
{
	int x; /* randomly generated number */
	int guess; /* user's guess */
	int response; /* response to continue game, 1 = yes otherwise no */
	/* loop until user press any key on keyboard except number 1 to quit the game */
	
	do
	{
		/* generate random number between 1 and 1000, 1 is shift, 1000 is scaling factor */
		x = 1 + rand() % 1000;
		/* prompt for guess */
		printf("\nI have a number between 1 and 1000.");
		printf("Can you guess my number?\n");
		printf("Please type your first guess.\n? ");
		scanf("%d", &guess);

		/* loop until correct number */
		while(guess != x)
		{
			/* if guess is too low */
			if(guess <= 0)
			{
				printf("Too low. Try again.\n? ");
			} /* end if */
		
			else
			{ /* guess is too high */
				printf("Too high. Try again.\n? ");
			} /* end else */
			scanf("%d", &guess);
		} /* end while */
		
		/* prompt for another game */
		printf("\nExcellent! You guessed the number!");
		printf(" Would you like to play again?\n");
		printf("Please type ( 1 = yes )? ");
		scanf("%d", &response);
	} while(response == 1); /* end do...while */
}/* end function guessGame */