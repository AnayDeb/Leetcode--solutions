#include<iostream>//https://www.naukri.com/code360/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM
#include<stack>
#include<vector>
using namespace std;
vector<int>nextsmaller(vector<int>&arr){
    stack<int>s;
    s.push(-1);
    int n=arr.size();
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        int element=arr[i];
        while(s.top()>=element){
            s.pop();
        }
        ans[i]=s.top();
        s.push(element);
    }
    return ans;
}
int main(){
    vector<int>arr={2,1,4,3};
    //find the next smaller element array
    vector<int>arr2=nextsmaller(arr);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    

    return 0;
}