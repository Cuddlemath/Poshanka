#include <stdio.h>

/*
File: Incls101.c
Author: Ronald Keyes
Assignment: In Class Exercise
Date: 10/1/25
References: 
*/


//

#define SIZE 2
void addMatrices(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]);
int numFact(int Num);

int main() {
  int arr1[SIZE][SIZE] = {
    {1, 2},
    {3, 4}
};

  int arr2[SIZE][SIZE] = {
    {1, 2},
    {3, 4}
};

  int i;
  int j;
  int n;
  int nfact;
  
  addMatrices(arr1, arr2);
  
  
  printf("Enter a number you want to take the factorial of: ");
  scanf("%d", &n);
  nfact = numFact(n);
  printf("The factorial of %d is %d\n", n, nfact);
  
}

void addMatrices(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]) {
  int i1;
  int j1;
  
  for (i1 = 0; i1 < SIZE; i1++) {
    for (j1 = 0; j1 < SIZE; j1++) {
      printf("%d\t", (arr1[i1][j1] + arr2[i1][j1]));
    }
    printf("\n");
  }
}

int numFact(int Num) {
  if ((Num == 0) || (Num == 1)) {
    return 1;
  }
  else
    return (Num * numFact(Num - 1));
}

