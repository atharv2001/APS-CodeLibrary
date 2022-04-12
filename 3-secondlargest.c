#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll unsigned long long
#define lf long double


//a>b returns true else false
int isALarger(char a[], char b[]){
    if(a[0]=='-' && b[0]!='-')
        return 0;
    if(a[0]!='-' && b[0]=='-')
        return 1;
    if(strcmp(a,b)==0)
        return 1;
    int n = strlen(a);
    int m = strlen(b);
    if(a[0]=='-' && b[0]=='-')
    {
        if(n>m)
            return 0;
        else if(m<n)
            return 1;
        else{
            int i=1;
            while(i<n){
                if(a[i]>b[i])
                    return 0;
                else if(a[i]<b[i])
                    return 1;
                i++;
            }
            return 1;
        }
    }
    else
    {
        if(n>m)
            return 1;
        else if(m>n)
            return 0;
        else{
            int i=0;
            while(i<n){
                if(a[i]>b[i])
                    return 1;
                else if(a[i]<b[i])
                    return 0;
                i++;
            }
            return 1;
        }
    }
}

//char* getLarger(char a[], char b[]){
//    if(a[0]=='-' && b[0]!='-')
//        return (char*)b;
//    if(a[0]!='-' && b[0]=='-')
//        return (char*)a;
//    if(strcmp(a,b)==0)
//        return (char *) a;
//    int n = strlen(a);
//    int m = strlen(b);
//    if(a[0]=='-' && b[0]=='-')
//    {
//        if(n>m)
//            return (char*) b;
//        else if(m<n)
//            return (char*) a;
//        else{
//            int i=1;
//            while(i<n){
//                if(a[i]>b[i])
//                    return (char *) b;
//                else if(a[i]<b[i])
//                    return (char *) a;
//                i++;
//            }
//            return (char*) a;
//        }
//    }
//    else
//    {
//        if(n>m)
//            return (char*) a;
//        else if(m>n)
//            return (char*) b;
//        else{
//            int i=0;
//            while(i<n){
//                if(a[i]>b[i])
//                    return (char*) a;
//                else if(a[i]<b[i])
//                    return (char*) b;
//                i++;
//            }
//            return (char *) a;
//        }
//    }
//}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char mx[1000];
    char secondmx[1000];
    char cur[1000];
    char temp[1000];
    ll n;
    scanf("%llu",&n);
    if(n==0 || n==1){
        printf("-1\n");
        return 0;
    }
    scanf("%s",mx);
    scanf("%s",secondmx);
    if(isALarger(mx,secondmx)==0){
        strcpy(temp,mx);
        strcpy(mx,secondmx);
        strcpy(secondmx,temp);
    }
    for(ll i=2;i<n;i++){
        scanf("%s",cur);
        if(isALarger(mx,cur)==0){
            strcpy(secondmx,mx);
            strcpy(mx,cur);
        }
        else if(isALarger(secondmx,cur)==0){
            strcpy(secondmx,cur);
        }
    }
    if(strcmp(mx,secondmx)==0)
        printf("-1\n");
    else
        printf("%s\n",secondmx);
    return 0;
}
