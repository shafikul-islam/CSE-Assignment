#include<stdio.h>
float main()
{
    float a,b,c;
    float *p1,*p2,*p3;

    printf("Enter three number:");
    scanf("%f %f %f",&a,&b,&c);

    p1=&a;
    p2=&b;
    p3=&c;

    if(*p1>*p2 && *p1>*p3){
        printf("\n%f is largest",*p1);
    }
    else if(*p2>*p1 && *p2>*p3){
        printf("\n%f is largest",*p2);
    }
    else
        printf("\n%f is largest",*p3);
}
