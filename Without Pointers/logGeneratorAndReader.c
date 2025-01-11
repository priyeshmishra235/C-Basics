#include <stdio.h>
#include <stdlib.h>
// logGeneratorAndReader
void read(char string[1001], int size, FILE *logFile) {
  printf("\nContents in the file:\n");
  int isEmpty = 1;
  while (fgets(string, size, logFile) != NULL) {
    printf("%s", string);
    isEmpty = 0;
  }
  if (isEmpty) {
    printf("File is empty\n");
  }
  printf("\n");
  fclose(logFile);
}
void write(FILE *logFile) {
  char *inputStr = (char *)malloc(1001 * sizeof(char));
  printf("enter the text you want to add to the file\n");
  // getchar() to remove any left over newline character for proper funtioning
  // of fgets()
  getchar();
  fgets(inputStr, 1001, stdin);
  fprintf(logFile, "%s", inputStr);
  printf("\nFile has been edited\n");

  free(inputStr);
  fclose(logFile);
}
int main() {
  while (1)  // infinite while loop
  {
    FILE *logFile = NULL;
    char string[1001];
    char *inputStr[1001];  // pointer must be declared outside loops or
                           // condition statements

    // asking user which mode they want to open file in
    char mode[2];
    printf(
        "Enter the mode to open the file: "
        "\na (append), r (read), w (write), x (exit program):\n");
    scanf("%s", mode);

    if (mode[0] == 'x') {
      return 0;
    }

    else {
      // opening file in required format and storing in logFile pointer
      logFile = fopen("log.txt", mode);

      // checking if file opened successfully or not
      if (logFile == NULL) {
        perror("\nInvalid mode or file operation failed.\n");
        fclose(logFile);
        return 1;
      }

      if (mode[0] == 'r') {
        read(string, sizeof(string), logFile);
      }

      else if (mode[0] == 'w' || mode[0] == 'a') {
        write(logFile);
      }

      else {
        perror("Input not defined.\n");
        fclose(logFile);
        return 1;
      }
    }
  }
}