#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[s]>arr[i]){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(i<pivotIndex && arr[i]<arr[pivotIndex]){
            i++;
        }
        while(j>pivotIndex && arr[j]>arr[pivotIndex]){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void QuickSort(vector<int>& arr,int s,int e){
    if(s>=e){
        return;
    }
    int pivot=partition(arr,s,e);
    //merge left side
    QuickSort(arr,s,pivot-1);
    //merge right side
    QuickSort(arr,pivot+1,e);
}
int main(){
    vector<int>nums={5,4,3,2,1};
    QuickSort(nums,0,nums.size()-1);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}