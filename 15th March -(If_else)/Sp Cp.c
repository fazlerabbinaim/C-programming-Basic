#include<stdio.h>
int main(){
    int cp;
    printf("Enter Cost Price :");
    scanf("%d",&cp);
    int sp;
    printf("Enter Selling Price :");
    scanf("%d",&sp);
    if (sp>cp)
        printf("Profit");
    if(cp>sp)
        printf("Loss");
    if (sp==cp)
printf("No Profit,No Loss");
return 0;
}
