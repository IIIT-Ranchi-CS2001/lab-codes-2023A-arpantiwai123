// Deletion .. at specific position..
#include<stdio.h>
int main(){
    int arr[50],size,x;
    printf("Enter the size of array :");
    scanf("%d",&size);
    
    printf("Enter the elements of array :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element for deletion :");
    scanf("%d",&x);// delete krna hai so first find its position..
    int s = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            s = i;// finding position of element by linear search
        }
    }
    for(int i = s;i<size;i++){
        arr[i] = arr[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}