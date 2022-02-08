/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {	
   int mark1,mark2,avg;
	
	printf("Input mark subject 01: ");
	scanf("%d",&mark1 );
	
	printf("Input mark subject 02: ");
	scanf("%d",&mark2 );
	
	avg=(mark1+mark2)/2;
	printf("Average mark subjects: %d",avg);
  
  return 0;
}

