#include<stdio.h>

int min (int a,int b){
if (a>b)
    return b;
else
    return a;
}

 int Gcd (int a,int b){
     int x,gcd;
     x = min(a,b);
     for(x;x>=1;x--){
        if (a%x==0 && b%x==0){
            gcd=x;
            break;
        }
     }
     return gcd;
 }
 int main()
 {
    int gcd,i,N,result;
    int Num[100];
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    result=Gcd(Num[0],Num[1]);
    for(i=1;i<N;i++){
        result=Gcd(result,Num[i]);
    }
    printf("\nGcd is %d",result);
    return 0;
 }
