#include<iostream>//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<deque>
#include<vector>
using namespace std;
vector<int>negative(int *arr,int k,int n){
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }
    if(dq.size()>0){
        ans.push_back(arr[dq.front()]);
    }else{
        ans.push_back(0);
    }
    for(int i=k;i<n;i++){
        if(!dq.empty() && (i-dq.front()>=k)){
            dq.pop_front();
        }
        if(arr[i]<0){
            dq.push_back(i);
        }
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }else{
            ans.push_back(0);
        }
    }
    return ans;

}
int main(){
    int arr[]={-8, 2, 3, -6, 10};
    int k=2;
    int n=5;
    vector<int>ans=negative(arr,k,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}