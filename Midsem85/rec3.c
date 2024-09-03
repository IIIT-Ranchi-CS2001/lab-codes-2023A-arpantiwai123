// printing 1 to n using recursion..
#include<stdio.h>
void number(int n){
    if(n==0) return;
    number(n-1);
    printf("%d ",n);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    number(n);
    return 0;
}