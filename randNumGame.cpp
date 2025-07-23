#include<iostream>
#include<math.h>

int main(){

    int choice;
    int guess;
    int numbertoguess;

    int numChoices = 9;

    printf("Hello please pick a number 1-10 \n");
    scanf("%d", &guess);

    numbertoguess = (rand() % numChoices) + 1;

    if (numbertoguess == guess)
    {
        printf("You are Correct!");
    }
    else{
        printf("You are incorrect the number you guessed was %d, and the correct answer was %d", guess, numbertoguess);
    }
    
    

    return 0;
}