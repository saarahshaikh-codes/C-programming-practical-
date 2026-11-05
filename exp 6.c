//WAP to define a counter function to print how many times the function is called using storage classes (static)

#include <stdio.h>
void counterFunction()
{
 static int count = 0;
 count++;
 printf("Function called %d time(s).\n", count);
}

int main()
{
 int n, i;

 printf("Enter how many times you want to call the counter function: ");
 scanf("%d", &n);

 printf("\n--- Calling Counter Function ---\n");
 for (i = 0; i < n; i++) {
 counterFunction();
 }
 return 0;
}
