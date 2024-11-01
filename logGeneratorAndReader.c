#include <stdio.h>
#include <stdlib.h>

int main()
{
   while(1) //infinite while loop
   {
    FILE *logFile = NULL;
    char string[1001];
    char *inputStr[1001]; // pointer must be declared outside loops or condition statements

    // asking user which mode they want to open file in
    char mode[2]; // declaring mode array with 3 indices to store "r","w","a",etc.
    printf("Enter the mode you want to open the file in :\n");
    scanf("%s", mode);

    // opening file in required format and storing in logFile pointer
    logFile = fopen("log.txt", mode);

    // checking if file opened successfully or not
    if (logFile == NULL)
    {
        printf("Error opening the file\n");
        printf("Input NOT defined."
               "\nOnly a(for append), r(for read), w(for write)"
               "\nis accepted and valid input.");
        return 1; // end the program here
    }

    if (mode[0] == 'r') // reading the file contents upto 1000 characters
    {
        printf("Reading file:\n");

        // reading file if not empty otherwise displayin empty file
        if (fgets(string, sizeof(string), logFile) != NULL)
        {
            do //using do while insted of just while because in latter case it will skip reading first line
              //and move on to the second line and starts reading from there
              //maybe it is working now because befor i was checking if not null first in if statement and just agian
              //in while and the printing so it was reading first not null then second not null and printing second
              //but now it is printing first then checking for null condition.
            {
                printf("%s", string);
            }while (fgets(string, sizeof(string), logFile) != NULL);
        }
        else
        {
            printf("File is empty\n");
        }
        printf("\n");
        fclose(logFile);
    }
    else if (mode[0] == 'w') // writing the file contents upto 1000 characters
    {
        char *inputStr = (char *)malloc(1001 * sizeof(char)); // dynamicaly storing string and freeing memory
        printf("enter the text you want to add to the file\n");
        // getchar() to remove any left over newline character for proper funtioning of fgets()
        getchar();
        // using fgets to get all character input until buffer size is reached
        fgets(inputStr, 1001, stdin);
        // print input in the txt file
        fprintf(logFile, "%s", inputStr);

        printf("\nFile has been edited");
        // free the memory and close the file
        printf("\n");

        free(inputStr);
        fclose(logFile);
    }
    else if (mode[0] == 'a') // appending the file contents upto 1000 characters
    {
        char *inputStr = (char *)malloc(1001 * sizeof(char));
        printf("enter the text you want to append to the file\n");

        getchar();
        fgets(inputStr, 1001, stdin);

        fprintf(logFile, "%s", inputStr);

        printf("\nFile has been appended");

        printf("\n");

        free(inputStr);
        fclose(logFile);
    }
    else
    { // input not defined
        printf("Input NOT defined."
               "\nOnly a(for append), r(for read), w(for write)"
               "\nis accepted and valid input.");
        printf("\n");
    }

   }
    return 0;
}