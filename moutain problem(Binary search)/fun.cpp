#include<iostream>
using namespace std;
int peakINDEX(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1]){
            end=mid;
        }
        else if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
    }
    return start;
}
int main(){
    int arr[]={1,2,3,5,7,3,1};
    cout<<peakINDEX(arr,7);

    return 0;
}