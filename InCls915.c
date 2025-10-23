#include <stdio.h>

/*
File: InCls915.c
Author: Ronald Keyes
Assignment: In Class Exercise
Date: 9/15/25
References: Lecture: Bitwise Ops and Binary.
*/


//
int main() {
  int Int1;
  char junk;
  
  printf("Enter an integer between 1 and 255: ");
  while (scanf("%d", &Int1) != 1,2,3,4,5,6,7,8,9,0)
  {
    printf("Ignoring character...");
    scanf("%c", &junk);  
  }
  printf("Here is your integer: %d", Int1);
  printf("Here is your integer multiplied by 2: %d \n", Int1 << 1);
  printf("Here is your integer divided by 2: %d \n", Int1 >> 1);
  printf("Here the integer representation of its one's compliment: %d \n", ~Int1);
  printf("Here the integer representation of its two's compliment: %d \n", (~Int1 + 1));
  
  return 0;
  }