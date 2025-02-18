#include<iostream>
#include<vector>
using namespace std;
int remove(vector<int>&arr){
    if(arr.size()==0){
        return 0;
    }
    int count=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[i-1]){
            arr[count]=arr[i];
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>arr={1,2,2,3,3,4};
    int cnt=remove(arr);
    for(int i=0;i<cnt;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}