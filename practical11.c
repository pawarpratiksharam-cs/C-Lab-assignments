#include <stdio.h>

int main() 
{
float attendance;
printf("Enter your attendance percentage: ");
scanf("%f", &attendance);

if (attendance >= 75.0) 
{
printf("Student is eligible for exam.\n");
} 
else
{
printf("Student is not eligible for exam.\n");
 }

return 0;
}