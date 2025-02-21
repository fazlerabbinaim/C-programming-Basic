#include<stdio.h>
int main(){
float principal,rate,time,si;
printf("Principal Number:");
scanf("%f",&principal);
printf("rate Number:");
scanf("%f",&rate );
printf("Time :");
scanf("%f",& time);
si=(principal*rate*time)/100;
printf("%f",si);
return 0;

}

