// Binary search..condition is that array should be sorted and elements should be unique..
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int target;
    cout<<"Enter the target :";
    cin>>target;// is element ko search krna hai..
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        bool flag = false;// bubble sort if suppose array is not sorted..
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1]; 
                arr[j+1]=temp;
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }// Here we do not have an idea for number of iteration ki kitni baar loop chalega so we use while loop
    int low = 0;
    int high = n-1;
    bool flag2 = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            flag2=true;
            break;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag2==true){
        cout<<"It is present";
    }
    else{
        cout<<"Not present";
    }
}