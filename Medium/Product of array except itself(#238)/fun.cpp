#include<iostream>
#include<vector>
using namespace std;
vector<int>productExcept(vector<int> &arr){
    int n=arr.size();
    vector<int>ans(n);
    int prefix=1;
    for(int i=0;i<n;i++){
        ans[i]=prefix;
        prefix=prefix*arr[i];
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--){
        ans[i]=ans[i]*suffix;
        suffix=suffix*arr[i];
    }
    return ans;
}
int main(){
    vector<int>arr={1,2,3,4};
    vector<int>newarr=productExcept(arr);
    for(int i=0;i<newarr.size();i++){
        cout<<newarr[i]<<" ";
    }

    return 0;
}