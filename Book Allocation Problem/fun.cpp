#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]+pageSum<=mid){
            pageSum=pageSum+arr[i];
        }else{
            studentCount++;
            if(studentCount>k || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}
int AllocateBook(int arr[],int n,int k){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int ans=0;
    int mid=start+(end-start)/2;
    while(start<end){
        mid=start+(end-start)/2;
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40};
    cout<< AllocateBook(arr,4,2);
}