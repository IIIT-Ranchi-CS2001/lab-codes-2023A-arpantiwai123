// Method 2 to print sum from 1 to n..
#include<stdio.h>
int summation(int n){
    if(n==0) return 0;
    int recAns = (n+summation(n-1));
    return recAns;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum = summation(n);
    printf("Sum of natural number is %d ",sum);
    return 0;
}