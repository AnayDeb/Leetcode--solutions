#include<iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int sum=0;
    int product =1;

    for(;n!=0;n=n/10){
        int digit;
        digit=n%10;
        sum=sum+digit;
        product=product*digit;
    }
    int ans;
    ans=product-sum;
    cout<<ans;

    return 0;
}