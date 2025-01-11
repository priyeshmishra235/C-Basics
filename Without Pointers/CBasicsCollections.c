#include <stdio.h>
// All of C programs imported
#include "CheckInputCharOrIntOrElse.c"
#include "FactorialFind.c"
#include "Hangman.c"
#include "NumInBig.c"
#include "Palindrome.c"
#include "SqmatrixMultiplication.c"
#include "StarPatterns.c"
#include "SumOfTheDigitsOfNumber.c"
#include "SwapTwoNum.c"
#include "anyTwoMatrixMulti.c"
#include "biggerNumberFindArray.c"
#include "determinant.c"
#include "guassianElimination.c"
#include "logGeneratorAndReader.c"
#include "nNumberSum.c"
#include "smallestNumberFind.c"
#include "studentInfoStr.c"
#include "sumFromNaturalNoMtoN.c"
#include "twoNumSumFind.c"

int main() {
  system("cls");
  int choice;
  printf(
      "\n----------------------------CHOICES-----------------------------\n");
  printf(
      "Select the Program you want to run:\n"
      "1.Bigger Number Find from set of values given by user\n"
      "2.Smallest Number Find from set of values given by user\n"
      "3.Sum of digits of any number given by the user\n"
      "4.Sum of natural number from m to n , values given by the user\n"
      "5.Swap two numbers\n"
      "6.Two number sum find , values given by the user\n"
      "7.Checking if input is Integer or Special symbol or Capital or Small "
      "Letter\n"
      "8.Finding sum of n numbers input given by the user\n"
      "9.Checking if entered Number is Palindrome or not\n"
      "10.Finding factorial of number input by the user\n"
      "11.Print different star Patterns of any height desired by the user\n"
      "12.Entering Student Information in the record and getting required "
      "details\n"
      "13.Using this choice you can generate any text file , read , append , "
      "or write in the file\n"
      "14.Print the Numbers whatever user types in big using * symbol\n"
      "15.Hangman Game\n"
      "16.Finding multiplication of any two mXn and pXq order matrices\n"
      "17.Finding Determinant of any n order matrices(not working. will be "
      "patched soon)\n"
      "18.Finding solution of System of Linear equations(does NOT work for "
      "infinite or inconsistent solutions)\n"
      "19.Square Matrix Multiplication\n\n"
      "Info- when the selected choice program will end, then only you will be "
      "able to select other choice\n"
      "--------------------------------------------\n\n");

  while (1) {  // for infinte loop

    printf("*****Enter your choice:*****\n");
    scanf("%d", &choice);
    printf("-------------------------------\n\n");
    switch (choice) {
      case 1: {
        biggerNumberFindArray();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 2: {
        smallestNumberFind();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 3: {
        SumOfTheDigitsOfNumber();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 4: {
        sumFromNaturalNoMtoN();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 5: {
        SwapTwoNum();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 6: {
        twoNumSumFind();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 7: {
        CheckInputCharOrIntOrElse();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 8: {
        nNumberSum();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 9: {
        Palindrome();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 10: {
        FactorialFind();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 11: {
        StarPatterns();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 12: {
        studentInfoStr();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 13: {
        logGeneratorAndReader();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 14: {
        NumInBig();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 15: {
        hangman();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 16: {
        anyTwoMatrixMulti();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 17: {
        determinant();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 18: {
        guassianElimination();
        printf("\n--------------------------------------------\n");
        break;
      }
      case 19: {
        SqmatrixMultiplication();
        printf("\n--------------------------------------------\n");
        break;
      }
      default: {
        printf(":Invalid Input:");
        printf("\n--------------------------------------------\n");
      }
    }
  }
  return 0;
}