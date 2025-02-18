#include<iostream>
#include<vector>
using namespace std;
int insert(vector<int>& arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        mid=start+(end-start)/2;
        if(target==arr[mid]){
            return mid;
        }else if(target>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }return start;
}
int main(){
    vector<int>arr={1,3,4,6};
    int target=5;
    cout<<insert(arr,target);

    return 0;
}