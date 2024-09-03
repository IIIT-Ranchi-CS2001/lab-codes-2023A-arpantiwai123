// printing good morning n times using recursion..
#include<stdio.h>
void greeting(int n){
    if(n==0) return;// Base case..
    printf("Good morning\n");
    greeting(n-1);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    greeting(n);
    return 0;
}