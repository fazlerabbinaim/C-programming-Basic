#include<stdio.h>
int main()
{
    float x;
    printf("Enter a Decimal Number:");
    scanf("%f",&x);
    int y=x;
    printf("Decimal Part:");
    printf("%d\n",y);

    float z=x-y;
    printf("The fractional part is:");
    printf("%f",z);

    return 0;
}


