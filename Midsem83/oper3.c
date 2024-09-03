// Insertion at beginning..
#include<stdio.h>
int main(){// previous code is true for all condition..
    int arr[50],size,x;
    printf("Enter the size of array :");
    scanf("%d",&size);
    if(size>50){
        printf("Invalid condition");
    }
    else{
        printf("Enter the elements of array :");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        int pos = 1;// index = 0;
        printf("Enter the element for insertion :");
        scanf("%d",&x);
        for(int i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=x;
        size++;
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
}