// Deletion of last element..
#include<stdio.h>
int main(){
    int arr[50],size,x;
    printf("Enter the size of array :");
    scanf("%d",&size);
    
    printf("Enter the elements of array :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    size--;
     for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}