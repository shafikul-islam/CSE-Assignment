#include<stdio.h>
int main()
{
    int i,N,j,a,Num[100],small;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    //for(i=0;i<N;i++){
      //  printf("%d th element is: %d\n",i+1,Num[i]);
    //}
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(Num[i]>Num[j]){
                a=Num[i];
                Num[i]=Num[j];
                Num[j]=a;
            }
        }
    }
    printf("The numbers from smaller to large :\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",Num[i]);
    }
}
