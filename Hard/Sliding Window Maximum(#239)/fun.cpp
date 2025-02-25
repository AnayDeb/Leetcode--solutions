#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int>slidingwindow(vector<int>&arr,int k){
    int n=arr.size();
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(!dq.empty() && arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    //ans mei sabse bade ko push karna h jo ki pehle hoga deque k
    ans.push_back(arr[dq.front()]);
    //next window k liye chalate hai
    for(int i=k;i<n;i++){
        //pehla element hatao window ka
        if(!dq.empty() && i-k>=dq.front()){
            dq.pop_front();
        }
        //smaller hatao deque se
        while(!dq.empty() && arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        //new element window mei add karo
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);
    }
    return ans;

}
int main(){
    vector<int>arr={1,3,-1,-3,5,3,6,7};
    vector<int>ans=slidingwindow(arr,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}