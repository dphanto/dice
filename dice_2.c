#include <stdio.h>
#include <stdlib.h> //for rand()
#include <time.h> //for time

int main(){

	int input, roll;

	srand(time(0));

	roll = rand() % 7; //range form 0 through 6

	printf("Guess the number: ");
	scanf("%i", &input);

	if(input > 6){

			printf("Number must be between 0 and 6 \n");

	}

	while(input <= 6){

		while(roll != input){

			printf("Wrong! ");

			if(roll % 2 == 0 && roll < input){

				printf("Number is even and is lower! \n");

				exit(1);
			}else{

				printf("Number is even and is higher! \n");

				exit(1);
			}

			if(roll < input){

				printf("Number is odd and is lower! \n");

				exit(1);
			}else{

				printf("Number is odd and is higher! \n");

				exit(1);
			}

		}

		if(roll == input){

			printf("Correct! The number is %i \n", roll);

			exit(1);
		}
	}
return 0;
}
