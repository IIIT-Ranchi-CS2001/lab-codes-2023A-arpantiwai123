// Make a function which calculates a raised to power b using recursion..
#include<stdio.h>
int exponent(int a,int b){
    if(b==0) return 1;
    int recAns = a*exponent(a,b-1);
    return recAns;
}
int main(){
    int a,b;
    printf("Enter a and b :");
    scanf("%d%d",&a,&b);
    int power = exponent(a,b);
    printf("%d raised to power %d is %d\n",a,b,power);
    return 0;
}
