#include<iostream>
using namespace std;
int squaresofn(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum+=digit*digit;
        n=n/10;
    }
    return sum;
}
bool happy(int n){
    int slow=n;
    int fast=squaresofn(n);
    while(fast!=slow){
        slow=squaresofn(slow);
        fast=squaresofn(squaresofn(fast));
        if(fast==1){
            return true;
        }
    }
    if(slow==1){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n=19;
    if(happy(n)){
        cout<<"it is happy"<<endl;
    }else{
        cout<<"not happy"<<endl;
    }

    return 0;
}