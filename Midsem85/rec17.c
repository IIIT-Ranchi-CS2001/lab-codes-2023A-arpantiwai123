// Tower of Hanoi..pow(2,n)-1 is the minimum moves required..
#include<stdio.h>// here we have to print the way of moving the disc to pillar
void towerofhanoi(int n,char s,char h,char d){
    if(n==0) return;// Power of recursion..
    towerofhanoi(n-1,s,d,h);
    printf("%c->%c\n",s,d);
    towerofhanoi(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("Enter the number of disc :");
    scanf("%d",&n);
    towerofhanoi(n,'s','h','d');
    return 0;
}