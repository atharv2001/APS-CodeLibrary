#include<stdio.h>
void check_number(int x);

int main()
{
    int n;
    printf("Enter Number to be checked\n");
    scanf("%d",&n);
    check_number(n);
}

void check_number(int x)
{
    int i=1,sum=0;
    while(i<x)
    {
        if(x%i==0)
        {
            sum=sum+i;
            printf("%d is a Perfect Divisor\n",i);
        }
        i++;

    }
    if(sum==x)
    {
        printf("%d is a Perfect Number\n",x);
    }
    else printf("%d is not a perfect Number\n",x);
}
