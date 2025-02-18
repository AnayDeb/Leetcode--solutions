#include<iostream>
#include<vector>
using namespace std;
int getSum(vector<vector<int>>& arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
         sum=sum+arr[i][i];
    }
    return sum;
}
int getSum2(vector<vector<int>>& arr2){
    int sum=0;
    int n=arr2.size();
    for(int i=n-1;i>=0;i--){
        sum=sum+arr2[i][n-1-i];
    }
    if(n%2!=0){
        sum=sum-arr2[n/2][n/2];
    }
    return sum;
}
int main(){
    vector<vector<int>>mat = {{1,2,3},
                              {4,5,6},
                              {7,8,9}};
    int sum=getSum(mat)+getSum2(mat);
    cout<<sum<<endl;

    return 0;
}