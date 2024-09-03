// quick sort practice ..
#include<iostream>
#include<vector>
using namespace std;
// partition algorithm..
int partition(int arr[],int si,int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count+si;
    swap(arr[si],arr[pivotIdx]);

    int i = si;
    int j = ei;

    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement){
            i++;
        }
        if(arr[j]>pivotElement){
            j--;
        }
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void quickSort(int arr[],int si,int ei){
    // Base case..
    if(si>=ei) return;
    int pi = partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}
int main(){
    int arr[] = {2,0,-1,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);
    cout<<"Sorted array is as follows :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}