// Insertion at last position ..
#include<stdio.h>
int main(){
    int arr[50],size,x;
    printf("Enter the size of array :");
    scanf("%d",&size);
    if(size>50){
        printf("Invalide input");
    }
    else{
        printf("Enter the element for insertion :");
        scanf("%d",&x);
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        // last index element ko right shift de do..
        arr[size]=arr[size-1];
        arr[size-1]=x;
        size++;
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
}