// Merge Sort based on Divide and Conquer..
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& result){
    int i = 0;//a
    int j = 0;//b
    int k = 0;//res

    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            result[k] = a[i];
            k++;
            i++;
        }
        else{
            result[k++] = b[j++];
        }
    }

    if(i==a.size()){
        while(j<b.size()){
            result[k++] = b[j++];
        }
    }
     if(j==b.size()){
        while(i<a.size()){
            result[k++] = a[i++];
        }
    }
    return;
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n1;
    vector<int> a(n1);

    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    vector<int> b(n2);
    for(int i=0;i<n2;i++){
        b[i] = v[n1+i];
    }

    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
    a.clear();
    b.clear();
    return;
}

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    mergeSort(v);


    cout<<"Sorted array using merge sort algo is as follows :\n";
    for(int ele: v){
        cout<<ele<<" ";
    }
}