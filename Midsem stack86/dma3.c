// DMA-> all the functions come under library..stdlib
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // DMA-> all the functions come under library..stdlib

    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to create :");
    scanf("%d",&n);
    ptr = (int *)calloc(n,  sizeof(int));// it dynamically created a 10 size array
    for (int i = 0; i < n; i++)// app 10 ko input bhi le skte ho
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    
    printf("\n");
    // Use of calloc
    printf("Enter the size of new array you want to create :");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr, n*sizeof(int));// it dynamically created a 10 size array
    for (int i = 0; i < n; i++)// app 10 ko input bhi le skte ho
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){//new value
        printf("%d ",ptr[i]);
    }
    return 0;
}