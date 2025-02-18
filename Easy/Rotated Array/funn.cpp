#include<iostream>
#include<vector>
using namespace std;
void printArray(const vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void rotate(vector<int>&nums,int k){
    vector<int>temp(nums.size());
    int i=0;
    int n=nums.size();
    while(i<n){
        temp[(k+i)%n]=nums[i];
        i++;

    }
    nums=temp;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    rotate(nums,2);
    printArray(nums);


    return 0;
}