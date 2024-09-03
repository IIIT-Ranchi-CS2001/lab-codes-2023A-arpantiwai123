#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
        int n;
        cin>>n;
        int p[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            sum+=p[i];
        }
        cout<<sum;
}
