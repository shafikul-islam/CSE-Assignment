#include<stdio.h>
#include<math.h>
int numberOfDivisors(int *p){
    int i,count=0,*ptr3;
    ptr3= &count;
    for(i=*p;i>0;i--){
        if(*p%i==0){
            *ptr3 = *ptr3 +1;
        }
    }
    return *ptr3;

}
int main()
{
    int arrSize,i;
    int* n;
    n=&arrSize;
    printf("Enter a number:");
    scanf("%d",&arrSize);
    int arr[arrSize+5];
    int div[arrSize+5];
    int* ptrArr;
    ptrArr=&arr[0];
    for(i=0;i<*n;i++){
        *ptrArr=i+1;
        ptrArr++;
    }
    ptrArr=&arr[0];
    int* ptrDiv;
    ptrDiv=&div[0];
    ptrArr=&arr[0];
    int* index;
    int max=0;
    for(i=0;i<*n;i++){
        if(numberOfDivisors(ptrArr)>max){
            max=numberOfDivisors(ptrArr);
            index=ptrArr;
        }
        ptrDiv++;
        ptrArr++;
    }
    printf("\n%d",*index);
}
