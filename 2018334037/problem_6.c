#include<stdio.h>
int numberof_divisor(int n)
{
    int i,count;
    count=0;
    for(i=n;i>0;i--){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
int main()
{
    int N,i,Num[1000],Div[1000],j,count;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        Num[i]=i+1;
    }
     for(i=1;i<=N;i++){
        //printf("%d\n",numberof_divisor(i));
        Div[i-1]=numberof_divisor(i);
       //printf("\n%d",Div[i-1]);
     }
     int max=-999999;
     for(i=0;i<N;i++){
        if(Div[i]> max){
            max=Div[i];
        }
     }
     //printf("\n%d",max);
     for(i=0;i<N;i++){
       if(Div[i]==max){
        printf("\n%d",Num[i]);
       }
     }
     return 0;
}
