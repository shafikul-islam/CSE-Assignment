#include<stdio.h>

int min (int a,int b){
if (a>b)
    return b;
else
    return a;
}

 int Lcm (int a,int b){
     int x,gcd,lcm;
     x = min(a,b);
     for(x;x>=1;x--){
        if (a%x==0 && b%x==0){
            gcd=x;
            break;
        }
     }
     lcm=(a*b)/gcd;
     return lcm;
 }
 int main()
 {
    int i,N,result;
    int Num[100];
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    result=Lcm(Num[0],Num[1]);
    for(i=1;i<N;i++){
        result=Lcm(result,Num[i]);
    }
    printf("\nLcm is %d",result);
    return 0;
 }
