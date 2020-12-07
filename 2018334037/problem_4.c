#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
int i,root;
    if(n==2){
      return 1;
    }
    if(n%2 == 0){
        return 0;
        }
    root= sqrt(n);
    for(i=3;i<=root;i=i+2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;

}

int main()
{
    int t,i,Num[100],j,count;
    printf("Enter the value of t (test case):");
    scanf("%d",&t);
     for(i=0;i<t;i++)
    {
        scanf("%d",&Num[i]);
    }
    for(i=0;i<t;i++){
            count=0;
        for(j=2;j<=Num[i];j++){
            if (is_prime(j)==1){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
