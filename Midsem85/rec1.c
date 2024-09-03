// Recursion is in another way alternate of loops
// Calculating factorial using recursion..
#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int fact = factorial(n);
    char ch = '!';
    printf("%d%c = %d",n,ch,fact);
}