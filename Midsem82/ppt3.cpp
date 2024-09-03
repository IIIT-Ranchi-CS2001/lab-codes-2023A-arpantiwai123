// Bubble sort.. More optimised bubble sort..
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int count=0;
    for(int i=1;i<n;i++){// max n-1 passes or round is required..
    bool flag = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
                flag = true;
            }
        }
       if(flag==false){// means already sorted..
        break;
       }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<count;
}