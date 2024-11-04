#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>  // For islower() function
#include <time.h>

#define MAX_TRIES 6

// Function declarations
int isValidInput(char* wordInput);
char* getHiddenWord(int len);
void printHangman(int tries);
int checkAndUpdateGuess(char guess, char* word, char* hiddenWord, int len);
void gameLoop(char* wordInput, int len);

// Function to print hangman based on wrong guesses
void printHangman(int tries) {
    printf("\n +---+\n"
           " |   |\n"
           " %s   |\n"  // head
           " %s   |\n"  // body and arms
           " %s   |\n"  // legs
           "     |\n"
           "=========\n",
           (tries >= 1) ? "O" : " ",
           (tries == 2) ? "|" :
           (tries == 3) ? "/|" :
           (tries >= 4) ? "/|\\" : " ",
           (tries == 5) ? "/" :
           (tries >= 6) ? "/ \\" : " ");
}

// Function to check if input is valid (all lowercase letters)
int isValidInput(char* wordInput) {
    for (int i = 0; wordInput[i] != '\0'; i++) {
        if (!islower(wordInput[i])) {
            return 0;  // Invalid input
        }
    }
    return 1;  // Valid input
}

// Function to get hidden word (dashes)
char* getHiddenWord(int len) {
    char* hiddenWord = malloc(2 * len + 1);  // Allocate memory for hidden word
    for (int i = 0; i < len; i++) {
        hiddenWord[2 * i] = ' ';
        hiddenWord[2 * i + 1] = '_';  // Fill with underscores
    }
    hiddenWord[2 * len] = '\0';  // Null-terminate
    return hiddenWord;
}

// Function to check guess and update the hidden word
int checkAndUpdateGuess(char guess, char* word, char* hiddenWord, int len) {
    int found = 0;
    for (int i = 0; i < len; i++) {
        if (word[i] == guess) {
            hiddenWord[2 * i + 1] = guess;  // Replace underscore with guessed letter
            found = 1;
        }
    }
    return found;
}

// Core game loop for guessing
void gameLoop(char* wordInput, int len) {
    char* hiddenWord = getHiddenWord(len);
    int filledChars = 0, wrongTries = 0;

    while (filledChars < len && wrongTries < MAX_TRIES) {
        printf("\n\tWord: %s\n", hiddenWord);
        char guess;
        printf("Player 2, guess a letter: ");
        scanf(" %c", &guess);

        if (checkAndUpdateGuess(guess, wordInput, hiddenWord, len)) {
            printf("Good guess!\n");
            filledChars++;
        } else {
            wrongTries++;
            printHangman(wrongTries);
            printf("Wrong guess! You have %d tries left.\n", MAX_TRIES - wrongTries);
        }
    }

    if (filledChars == len) {
        printf("\nCongratulations! You've saved the hangman!\n");
    } else {
        printf("\nGame Over! The hangman was hanged.\n");
    }

    free(hiddenWord);  // Free the dynamically allocated memory
}

// Human vs Human mode
void VsHuman() {
    char wordInput[100];
    do {
        printf("Enter the word Player 2 has to guess (lowercase letters only): ");
        scanf("%s", wordInput);
    } while (!isValidInput(wordInput));

    system("cls");  // Clear the screen after word entry
    printf("--------Word has been hidden--------\n\n");

    int len = (int)strlen(wordInput);
    gameLoop(wordInput, len);  // Start the game loop
}

// Human vs Computer mode (word list or random generator)
void VsComputer() {
    char* wordList[] = { "apple", "banana", "grapes", "orange", "melon" };
    int wordCount = sizeof(wordList) / sizeof(wordList[0]);

    srand(time(0));  // Seed the random number generator
    char* wordInput = wordList[rand() % wordCount];  // Select a random word

    printf("The computer has selected a word.\n\n");
    int len = (int)strlen(wordInput);
    gameLoop(wordInput, len);  // Start the game loop
}

int main() {
    char choice;
    do {
        printf("\t------------Hangman Game------------\n\n"
               "Modes Available:\n"
               " 1. Vs Computer\n"
               " 2. Player 1 Vs Player 2\n"
               " 3. What is Hangman Game?\n"
               "Enter the mode you want to play in: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                system("cls");
                VsComputer();
                break;
            case '2':
                system("cls");
                VsHuman();
                break;
            case '3':
                printf("\nHangman is a word-guessing game where one player thinks of a word,\n"
                       "and the other tries to guess it by suggesting letters. Each incorrect\n"
                       "guess results in a part of a stick-figure being drawn, representing a\n"
                       "person being \"hanged.\" The game ends when the word is guessed correctly\n"
                       "or the hangman drawing is completed, symbolizing a loss.\n");
                break;
            default:
                printf("Invalid choice! Please select a valid mode.\n");
        }
    } while (choice != '1' && choice != '2');

    return 0;
}
