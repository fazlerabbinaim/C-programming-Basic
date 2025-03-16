#include<stdio.h>
int main(){
    int year;
   printf("Enter any Year:");
   scanf("%d",&year);
   if(year%4==0)
         printf("LeapYear");
    else if(year%400==0 && year%100!=0)
         printf("LeapYear");
    else
    printf("Not LeapYear");

getch();
}
