// power function(logarithmic)
#include<stdio.h>
int exponent(int a,int b){
    if(b==1) return a;
    if(b==0) return 1;
    // this way number of calls decreases..
    if(b%2==0){
        return exponent(a,b/2)*exponent(a,b/2);
    }
else{
     return exponent(a,b/2)*exponent(a,b/2)*a;// observation.. as if b is odd then on division by 2 one power decreases
   }
}
int main(){
    int a,b;
    printf("Enter a and b :");
    scanf("%d%d",&a,&b);
    int power = exponent(a,b);
    printf("%d raised to power %d is %d\n",a,b,power);
    return 0;
}