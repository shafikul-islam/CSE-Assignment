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
    int t,i,Num[100],j,count;
    printf("Enter the value of t (test case):");
    scanf("%d",&t);
     for(i=0;i<t;i++){
        scanf("%d",&Num[i]);
    }
     for(i=0;i<t;i++){
        printf("%d\n",numberof_divisor(Num[i]));
     }

}
