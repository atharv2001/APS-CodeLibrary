#include<stdio.h>
#include<limits.h>
#define Size 10
void Read(int[],int);
void Display(int[],int);
int Median(int[],int);
int main()
{
    int list[Size],n;
    printf("Enter No\n");
    scanf("%d",&n);
    printf("Enter list in order\n");
    Read(list,n);
    Display(list,n);
    printf("Median:%d",Median(list,n));
}
int Median(int A[Size],int n)
{
    if(n % 2)
        return(A[n/2]);
    return((A[n/2]+A[n/2-1])/2);
}
    void Read(int A[Size],int m)
{
    int i;
    for(i=0;i<m;i++)
        scanf("%d",&A[i]);
}
void Display(int A[Size],int m)
{
    int i;
    for(i=0;i<m;i++)
        printf("%4d",A[i]);
}
int Max(int A[],int n)
{
    int i,M=INT_MIN; // in limits.h
    for(i=0;i<n;i++)
        if(M<A[i])
           M=A[i];
    return M;
}
int Count(int A[Size],int n)
{
    int i, c=0, M;
    M=Max(A,M);
    for(i=0;i<n;++i)
        if(A[i]==M)
        c++;

    return c;
}


