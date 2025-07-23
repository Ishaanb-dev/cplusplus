#include<iostream>
#include<math.h>

int main(){

    int choice;
    int guess;
    int numbertoguess;
    int stopFlag = 0;

    int numChoices = 9;


    while (stopFlag != 1)
    {

    printf("Hello please pick a number 1-10 \n");
    scanf("%d", &guess);

    numbertoguess = (rand() % numChoices) + 1;

    if (numbertoguess == guess)
    {
        printf("You are Correct! \n");
        stopFlag = 1;
    }
    else{
        printf("You are incorrect the number you guessed was %d, and the correct answer was %d \n", guess, numbertoguess);
    }
    
   }

    return 0;
}