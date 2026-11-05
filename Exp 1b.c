
//WAP to get students PCM marks from user and find average. Use conditional operators to print if the student is eligible for admission
#include <stdio.h>
int main()
{
float physics, chemistry, maths, total, average;

// Reading PCM marks
printf("Enter marks for Physics:");
scanf("%f", &physics);
printf("Enter marks for Chemistry:");
scanf("%f", &chemistry);
printf("Enter marks for Mathematics: "); scanf("%f", &maths);

// Calculations
total = physics + chemistry + maths;
average = total / 3.0;
printf("\n------------------------------------- \n");
printf("PCM Total\t:\t%.2f / 300\n", total);
printf("Average Marks\t:\t%.2f%%\n", average);
printf("--------------------------------------- \n");

// Eligibility check using the conditional operator (condition ? true_case : false_case)
printf("Status\t\t:\t%s\n",(average>=50)?"ELIGIBLE FOR ADMISSION" : "NOT ELIGIBLE FOR ADMISSION");
printf("----------------------------------------\n");

return 0;
}



