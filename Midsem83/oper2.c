// Insertion.. Jeny ma'am 
#include<stdio.h>
int main(){// at particular position..
    int arr[50],size,x;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int pos;
    printf("Enter the position for insertion :");
    scanf("%d",&pos);
    if(pos<=0 || size>50){
        printf("Invalid condition");
    }
    else{
        printf("Enter the elements of array :");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("Enter the number for insertion :");
        scanf("%d",&x);// at index = 2 insert x i.e pos = 3..
        for(int i=size-1;i>=pos-1;i--){// right shift 
            arr[i+1] = arr[i];// a[i] is shifted to a[i+1]..
        }
        arr[pos-1] = x;
        size++;

        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
}