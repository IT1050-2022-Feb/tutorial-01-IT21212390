/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
  float s1, s2, sum, avg;
  printf("enter subject 1 mark :");
  scanf("%f",s1);
  printf("enter subject 2 mark :");
  scanf("%f",s2);
  
   sum = s1 + s2;
   avg = sum / 2;
   
   printf("Average of marks : %.2f",avg);
  return 0;
}

