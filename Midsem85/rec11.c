#include<stdio.h>
int stair(int n){ // 1step 2step also you can triple step..
    if(n==1) return 1;// base case
    if(n==2) return 2;// base case
    if(n==3) return 4;// base case..
    int totalways =  stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main(){
    int n;
    printf("Enter the number of stairs :");
    scanf("%d",&n);
    int ways = stair(n);
    printf("Number of ways is :%d",ways);
    return 0;
}