#include<stdio.h>
int fib(int n) {
    // Base cases
    if (n == 0){
        return 0;
    } 
    if (n == 1){ 
        return 1;
    }
    // Recursive case
    return fib(n - 1) + fib(n - 2);
}
int main(){
    int a=6;
    printf("%d\n",fib(a));
    return 0;
}


