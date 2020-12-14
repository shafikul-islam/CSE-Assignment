#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    printf("Enter the value of N(Number of Employee):");
    scanf("%d",&n);
    int age[n],salary[n];
    char name[n][40];

    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",&name[i][0],&age[i],&salary[i]);
    }
    printf("\n \n");
    for(i=0;i<n;i++)
    {
        if(age[i]>30){
            printf("%s  %d  %d\n",name[i],age[i],salary[i]);
        }
    }
   return 0;
}

