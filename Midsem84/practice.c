#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target ;
    printf("Enter the target :");
    scanf("%d",&target);
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        }
        else if(arr[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag==true){
        printf("Present");
    }
    else{
        printf("Not present");
    }
}