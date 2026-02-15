#include <stdio.h>
int main()
{
 int inputYear;
 printf("Enter a year: ");
 scanf("%d", &inputYear);
 if ((inputYear % 4 == 0 && inputYear % 100 != 0) || (inputYear % 400 == 0)) 
 {
 printf("%d is a leap year.\n", inputYear);
 }
 else
 {
 printf("%d is not a leap year.\n", inputYear);
 }
 return 0;
}