#include<iostream>
#include<vector>
using namespace std;
int maxarea(vector<int>&arr){
    int area=0;
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        int newarea=(j-i)*min(arr[i],arr[j]);
        area=max(area,newarea);
        if(arr[i]<arr[j]){
            i++;
        }else{
            j--;
        }
    }
    return area;
}
int main(){
    vector<int>arr={1,8,6,2,5,4,8,3,7};
    cout<<maxarea(arr);

    return 0;
}