#include<stdio.h>
int main(){
    int n=0;
    int m=n;
    int mask=0;
    if(m==0){
        return 1;
    }
    while(m!=0){
        m=m>>1;
        mask=(mask<<1)|1;
    }int ans=(~n)&mask;
    printf("%d",ans);
}