#include<iostream>
using namespace std;
bool check(int arr[],int n){
    int i=1;
    int count=0;
    while(i<n){
        if(arr[i-1]>arr[i]){
            count++;
        }
       
        i++;
    }
     if(arr[n-1]>arr[0]){
            count++;
        }
    return count<=1;
}
int main(){
    int arr[]={3,4,1,2,4};
    cout<<check(arr,5);

    return 0;
}