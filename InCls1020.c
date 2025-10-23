#include <stdio.h>
#include <stdio.h>

/*
File: InCls1020.c
Author: Ronald Keyes
Assignment: In Class 10/20/25
Date: 10/20/25
References: Looked at HW 5, Lectures: Pointers and File IO, Working with Main, and String Functions, Googled atoi and strtod functions
*/


//

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(int argc, char * argv[]) 
{
  if (argc != 4) {
    printf("Error! Enter intputs. \n");
    return 1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[3]);
  int result = 0;
  
  printf("a = %d \n", a);
  printf("b = %d \n", b);
  
  if (b == 0 && strcmp(argv[2], "/") == 0) {
    printf("Error! You cannot divide by 0 \n");
    return 1;
  }
  
  if (strcmp(argv[2], "+") == 0) {
    result = add(a,b);
  }
  else if (strcmp(argv[2], "-") == 0) {
    result = subtract(a,b);
  }
  else if (strcmp(argv[2], "x") == 0) {
    result = multiply(a,b);
  }
  else if (strcmp(argv[2], "/") == 0) {
    result = divide(a,b);
  }
  else {
    printf("Error! Invalid inputs! Rerun program to try again. \n");
    return 1;
  }
  
  printf("The result is %d \n", result);
  return 0;
}

int add(int a, int b) {
  return (a + b);
}

int subtract(int a, int b) {
  return (a - b);
}

int multiply(int a, int b) {
  return (a * b);
}

int divide(int a, int b) {
  return (a / b);
}

