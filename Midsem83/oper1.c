// Traversal..
#include<stdio.h>
int main(){
    int arr[50],size;
    printf("Enter the size of array :");
    scanf("%d",&size);// size tells the elements number in array
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}