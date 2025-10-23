#include <stdio.h>

/*
File: InCls1022.c
Author: Ronald Keyes
Assignment: In Class 10/22/25
Date: 10/20/25
References: Looked at In Class 10/22, Lecture: Structs, Fgets and Recursion
*/


//

typedef struct {
  char name[50];
  int age;
  char grade;
  int num_courses;
} Student;

void studentDataInput(Student *Me);

void studentDataPrint(Student *Me);


int main() {
  Student Me;
  
  studentDataInput(&Me);
  
  studentDataPrint(&Me);
}

void studentDataInput(Student *Me) {
  printf("Enter your name:");
  fgets(Me->name, sizeof(Me->name), stdin);
  
  printf("Enter your age:");
  scanf("%d", &Me->age);
  
  printf("Enter your letter grade:");
  scanf("%s", &Me->grade);
  
  printf("Enter the number of courses you are taking:");
  scanf("%d", &Me->num_courses);
}

void studentDataPrint(Student *Me) {
  printf("\nName: %s", Me->name);
  printf("Age: %d \n", Me->age);
  printf("Grade: %c \n", Me->grade);
  printf("Number of Courses: %d \n", Me->num_courses);
}