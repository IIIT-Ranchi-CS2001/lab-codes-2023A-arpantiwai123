#include<stdio.h>
void number(int n,int x){
    if(x>n) return;
    printf("%d ",x++);
    number(n,x);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    number(n,1);
    return 0;
}