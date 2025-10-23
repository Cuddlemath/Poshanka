#include <stdio.h>

/*
Author: Ronald Keyes
Course: Computer Science 125
Assignment: In Class Excersise
Date: 8/27/25
*/


//
int main()
{

printf("Welcome to Python's pizzas! (in C) \n");
printf("Try some items from our menu: \n");
printf("1. Cheese Pizza      |  $14.49 \n");
printf("2. Pepperoni Pizza   |  $16.49 \n");
printf("3. Fountain Drink    |  $2.49 \n");
printf("4. Arizona Sweet Tea |  $3.49 \n");

float Bill = 1.49;
int Item1;
printf("Enter your first item (1, 2, 3 or 4): ");
scanf("%d", &Item1);

if (Item1 == 1)
{
  printf("\n You chose Cheese Pizza! $14.49 added to your bill. \n");
  Bill = Bill + 14.49;
}
else if (Item1 == 2)
{
  printf("You chose Pepperoni Pizza! $16.49 added to your bill. \n");
  Bill = Bill + 16.49;
}
else if (Item1 == 3)
{
  printf("You chose Fountain Drink! $2.49 added to your bill. \n");
  Bill = Bill + 2.49;
}
else if (Item1 == 4)
{
  printf("You chose Arizona Sweet Tea! $3.49 added to your bill. \n");
  Bill = Bill + 3.49;
}
else
  printf("Error, that is not an option. Nothing added to your order. \n");



int Item2;
printf("Enter your second item (1, 2, 3 or 4): ");
scanf("%d", &Item2);

if (Item2 == 1)
{
  printf("\nYou chose Cheese Pizza! $14.49 added to your bill. \n");
  Bill = Bill + 14.49;
}
else if (Item2 == 2)
{
  printf("You chose Pepperoni Pizza! $16.49 added to your bill. \n");
  Bill = Bill + 16.49;
}
else if (Item2 == 3)
{
  printf("You chose Fountain Drink! $2.49 added to your bill. \n");
  Bill = Bill + 2.49;
}
else if (Item2 == 4)
{
  printf("You chose Arizona Sweet Tea! $3.49 added to your bill. \n");
  Bill = Bill + 3.49;
}
else
  printf("Error, that is not an option. Nothing added to your order. \n");

printf("Thank you for ordering! Your total bill (including tax) is $%.2f. Enjoy your meal! \n", Bill);

return 0;
}