// wap to calculate nth fibonacci number using recursion..
#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;// power of recursion..
    return fibo(n-1)+ fibo(n-2);
}
int main(){
    int n;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    int x = fibo(n);
    printf("%dth fibonacci number is %d",n,x);
    return 0;
}