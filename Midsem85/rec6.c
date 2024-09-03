// Printing sum from 1 to n using recursion..
#include<stdio.h>
void summation(int n,int s){
    if(n==0){
        printf("Sum of natural numbers is %d",s);
        return;
    }
     summation(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    summation(n,0);
    return 0;
}