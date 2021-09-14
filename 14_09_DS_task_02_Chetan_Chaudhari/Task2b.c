#include<stdio.h>
#include<stdlib.h>
void main()
{
    int numbers,i;
    int arr[1000];
    int *ptr;
    printf("Enter number of inputs");
    scanf("%d",&numbers);
    ptr=(int *)malloc(sizeof(char)*numbers);
    for(i=0;i<numbers;i++)
    {
        scanf("%d",&arr[i]);
    }    
   for(i=0;i<numbers;i++)
   {
       printf("%d\n",arr[i]);
   }
    printf("\n");
    printf("Enter number of inputs");
    scanf("%d",&numbers);
    int *reptr;
    reptr=(int *)realloc(ptr,sizeof(char)*numbers);
    for (i=0;i<numbers;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<numbers;i++)
    {
        printf("%d\n",arr[i]);
    }
}