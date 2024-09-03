#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Insertion sort..
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp) arr[j+1]=arr[j];
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}