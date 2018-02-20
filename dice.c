#include <stdio.h>
#include <stdlib.h> //for rand()
#include <time.h> //for time()

int main(){

	int input, result;

	srand(time(0)); //must be set before rand()

	int roll = rand() % 7; //range 0 through  6

	printf("Guess the number: ");
	scanf("%d", &input);

	if(input > 6){

		printf("Error: Enter in a number 0 through 6! \n");
		exit(1);

	}
	else if(roll != input && roll % 2 == 0 && roll < input){

		printf("Wrong! Number is even and is lower! \n");

	}
	else if(roll != input && roll < input){

		printf("Wrong! Number is odd and is lower! \n");

	}
	else if(roll != input && roll % 2 == 0 && roll > input){

		printf("Wrong! Number is even and is higher! \n");

	}
	else if(roll != input && roll > input){

		printf("Wrong! Number is odd and is higher! \n");

	}
	else{

		printf("Correct! \n");

	}

return 0;
}
