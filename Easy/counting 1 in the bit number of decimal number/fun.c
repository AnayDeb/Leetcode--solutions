#include <stdio.h>

int main() {
    int n=10;
    int count=0;
    while(n!=0){
        if(n&1==1){
            count++;
        }
        n=n>>1;
    }
    printf("%d",count);
    return 0;
}