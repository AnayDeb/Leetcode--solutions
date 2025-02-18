#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(target==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
    }
    return ans;
}
int lastOccurence(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(target==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        
    }
    return ans;
}
int total(int arr[],int n,int target){
    int first=firstOccurence(arr,n,target);
    int last=lastOccurence(arr,n,target);
    int ans=(last-first)+1;
    return ans;
}    

int main(){
    int arr[]={1,2,3,3,3,3,3,3,3,3,3,7};
    cout<<"First Occurence is:"<<firstOccurence(arr,12,3)<<","<<"Second Occurence is:" <<lastOccurence(arr,12,3)<<endl;
    cout<<total(arr,12,3);
    return 0;
}