#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include <ctype.h>  // For islower() function

#define MAX_TRIES 6

//declaring Functions
void printHangman(tries); //independent
void tries(int tries); //independent
void validInput(char *valid , char wordInput[100]); //independent
void dashes(char *wordAsDash,char wordInput[100]); //independent
void checkUpdateGuess(int len, char* wordAsDash,char wordInput[100]);

void VsHuman(){
    
}







void checkUpdateGuess(int len, char* wordAsDash,char wordInput[100])
{
    //iterating through the wordInput to check if any character matches the guesses
    //if it matches then do "some actions"
    char p2input[2]; //player2 input
    int filledChars=0;
    int wrongtries=0;
    while(filledChars<len && wrongtries<MAX_TRIES){
        char *statement = filledChars!=0 ? "Player 2 , Guess another character: " : "Player 2 , Guess a character: ";
        printf("%s",statement);
        scanf("%s",p2input);

    int correctguess=0;
        for(int i=0; i<len;i++){
            if(p2input[0]==wordInput[i]){
                filledChars++;
                wordAsDash[2*i +1]=p2input[0]; //replace those dashes with the input character
                correctguess=1;
            }
        }
        if(!correctguess){
            wrongtries++;
            printHangman(wrongtries);
            printf("Wrong guess! You have %d tries left.\n", MAX_TRIES - wrongtries);
        }
        printf("%s\n",wordAsDash);
    }
    
    //win status 
    if(filledChars==len){
        printf("\nHangman has been Saved");
    }
    else{
        printf("\n\t\b\b\b\b***Game Over***\nHangman has been Hanged");
    }
}
//function to print dashes dynamically
void dashes(char *wordAsDash,char wordInput[100])
{
    int len =(int)strlen(wordInput);

    printf("-------Word has been hidden-------\n\n");
    printf("the length of wordInput is %d\n",len); //hinting player2 about length of wordInput
    char *wordAsDash=malloc(2*len +1); //declares a string pointer that changes its value at runtime
    //string is just a array of characters
    for(int i=0;i<len;i++) { // looping for the entire lenth of wordInput and printing underscores
        wordAsDash[2*i]=' ';
        wordAsDash[2*i + 1]='_';
    }
    printf("\n\tWord:%s\n",wordAsDash); //printing dashes dynamically stored
    printf("\n\n");
}
//Function to check if input of Player 2 is valid or not
void validInput(char *valid , char wordInput[100])
{
    printf("enter the word you want Player 2 to guess\n");
    scanf("%s",wordInput); //no need for & in strings with scanf

    // Check if all characters in the input are lowercase letters
    int valid = 1;  // Assume the input is valid initially
    for (int i = 0; wordInput[i] != '\0'; i++) {
        if (!islower(wordInput[i])) {  // Check if the character is not lowercase
            valid = 0;  // Mark as invalid if any character is not lowercase
            break;  // No need to continue checking if it's already invalid
        }
    }
    char *isValid = valid ? "Valid input\n" : "Enter only lowercase letters\n";
    printf("%s",isValid);
    if (!valid) {
        printf("enter the word you want Player 2 to guess\n");
        scanf("%s",wordInput); //no need for & in strings with scanf
    }
}
//function to compare wrong choices to max no of choices and if wrong printHangman
void tries(int tries)
{
    int tries=0;
    tries=tries+1;
    printf("Hangman Drawing:\n");
    // Loop to print hangman for each stage of wrong guesses
    for (tries; tries <= MAX_TRIES; tries++) 
    {
        printf("\nWrong Guess: %d\n", tries);
        printHangman(tries);
    }
}
// Function to print hangman depending on the number of wrong guesses (tries)
void printHangman(int tries) {
    printf("\n");
    printf(" +---+\n"
           " |   |\n");

    // Print head
    {char*head= tries>=1 ? " O   |\n" : "     |\n";
    printf("%s",head);}

    // Print body and arms
    if (tries == 2) {
        printf(" |   |\n");  // body only
    } else if (tries == 3) {
        printf("/|   |\n");  // body with one arm
    } else if (tries >= 4) {
        printf("/|\\  |\n");  // body with both arms
    } else {
        printf("     |\n");  // empty
    }

    // Print legs
    if (tries == 5) {
        printf("/    |\n");  // one leg
    } else if (tries >= 6) {
        printf("/ \\  |\n");  // both legs
    } else {
        printf("     |\n");  // empty
    }

    // Bottom of the gallows
    printf("     |\n");
    printf("=========\n");
}
