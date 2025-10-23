#include <stdio.h>

/*
File: InCls93_Ronald_Keyes.c
Author: Ronald Keyes
Assignment: In Class 9/3/25
Date: 9/3/25
References: Looked at Homework 1 and 
*/

int main()
{
  int Count = 0;
  int i = 0;

  printf("Enter a number between 1 and 1000: ");
  scanf("%d", &Count);

  for (i = 0; i < Count + 1; i++)
  {
    printf("%d \n", i);
  }
  
  printf("Congrats! You can count up to %d!", i - 1);

}