#include<iostream>
#include<vector>
using namespace std;
int countPrime(int n){
    vector<bool>prime(n+1,true);
    if(n<=1){
        return 0;
    }
    prime[0]=prime[1]=false;
    int count=0;
    for(int i=2;i<n;i++){
        if(prime[i]==true){
            count++;

            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    return count;
}
int main(){
    int n=10;
    cout<<countPrime(n);

    return 0;
}