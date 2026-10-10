#include <stdio.h>

int main() {
int age;
printf("Enter age: ");
scanf("%d", &age);

if (age < 13) {
printf("Category: Child\n");
} 
else if (age < 20) 
{
printf("Category: Teenager\n");
} 
else 
{
printf("Category: Adult\n");
}
return 0;
}