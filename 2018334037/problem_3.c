#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int i,root;
    if(n<2){
        printf("NO\n");
        return 0;
    }
    if(n==2){
            printf("YES\n");
        return 0;
    }
    if(n%2 == 0){
        printf("NO\n");
        return 0;
        }
    root= sqrt(n);
    for(i=3;i<=root;i=i+2){
        if(n%i == 0){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");


}

int main()
{
    int t,i,Num[100];
    printf("Enter the value of t (test case):");
    scanf("%d",&t);
     for(i=0;i<t;i++)
    {
        scanf("%d",&Num[i]);
    }
    for(i=0;i<t;i++){
        is_prime(Num[i]);
    }
    return 0;
}
