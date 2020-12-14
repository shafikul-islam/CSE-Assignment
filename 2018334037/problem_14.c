#include<stdio.h>
#include<string.h>


struct employee {
    char name[40];
    char country[40];
    int age;
    int salary;

};

int main()
{
    int i,n;
    printf("Enter  the Number of employee:");
    scanf("%d",&n);

    struct employee office[n];

    for(i=0;i<n;i++){
        scanf("%s %s %d %d",&office[i].name,&office[i].country,&office[i].age,&office[i].salary);
    }
    printf("\n \n \n");
    char matching_country[]="Bangladesh";
     for(i=0;i<n;i++){
            if(strcmp(office[i].country,matching_country) == 0)
            printf("%s  %s   %d   %d\n",office[i].name,office[i].country,office[i].age,office[i].salary);
     }

}
