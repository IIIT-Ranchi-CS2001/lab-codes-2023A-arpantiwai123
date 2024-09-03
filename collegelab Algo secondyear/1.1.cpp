// Bubble sort algorithm..
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size :";
    cin>>n;
    cout<<"Enter the elements :";
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}