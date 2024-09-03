#include<stdio.h>
int fun(int n){
    int ams=0;
    int r=0;
    int c=n;
    while(n>0){
        r=n%10;
        ams=(r*r*r)+ams;
        n=n/10;
    }
    if(c==ams){
       return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=fun(i);
        if(num==1){
             printf("%d ",i);
        }
    }
}