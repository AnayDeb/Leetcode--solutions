#include<iostream>
#include<vector>
#include<map>
using namespace std;
int Find(vector<int>&nums){
    map<int,int>count;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
        if(count[nums[i]]>1){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,3,3,4,5};
    cout<<Find(nums);

    return 0;
}