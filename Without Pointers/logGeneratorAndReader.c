#include <stdio.h>
#include <stdlib.h>
//logGeneratorAndReader
int main()
{
    while (1) // infinite while loop
    {
        FILE *logFile = NULL;
        char string[1001];
        char *inputStr[1001]; // pointer must be declared outside loops or condition statements

        // asking user which mode they want to open file in
        char mode[2]; // declaring mode array to get "r","w","a","x",as input
        // mode is declared as array of 2 because it will store 1 character and 1 null character
        printf("Enter the mode to open the file: "
               "\na (append), r (read), w (write), x (exit program):\n");
        scanf("%s", mode);

        if (mode[0] == 'x')
        {
            return 0;
        }

        else
        {
            // opening file in required format and storing in logFile pointer
            logFile = fopen("log.txt", mode);

            // checking if file opened successfully or not
            if (logFile == NULL)
            {
                perror("\nInvalid mode or file operation failed.\n");
                fclose(logFile);
                continue;
            }

            if (mode[0] == 'r') // reading the file contents upto 1000 characters
            {
                printf("\nContents in the file:\n");
                int isEmpty = 1;
                while (fgets(string, sizeof(string), logFile) != NULL)
                {
                    printf("%s", string);
                    isEmpty = 0;
                }
                if (isEmpty)
                {
                    printf("File is empty\n");
                }
                printf("\n");
                fclose(logFile);
            }

            else if (mode[0] == 'w' || mode[0] == 'a') // writing the file contents upto 1000 characters
            {
                char *inputStr = (char *)malloc(1001 * sizeof(char)); // dynamicaly storing string and freeing memory
                printf("enter the text you want to add to the file\n");
                // getchar() to remove any left over newline character for proper funtioning of fgets()
                getchar();
                // using fgets to get all character input until buffer size is reached
                fgets(inputStr, 1001, stdin);
                // print input in the txt file
                fprintf(logFile, "%s", inputStr);

                printf("\nFile has been edited\n");
                // free the memory and close the file

                free(inputStr);
                fclose(logFile);
            }

            else
            {
                perror("Input not defined.\n");
                fclose(logFile);
            }
        }
    }

    return 0;
}