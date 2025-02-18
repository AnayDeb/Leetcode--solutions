#include<iostream>
#include<vector>
using namespace std;
void wavy(int ar[][3],int n,int m){
    vector<int>temp;
    for(int i=0;i<m;i++){
        if(i%2!=0){
            for(int j=n-1;j>=0;j--){
                temp.push_back(ar[j][i]);
                cout<<ar[j][i]<<" ";
            }
        }else{
            for(int k=0;k<n;k++){
                temp.push_back(ar[k][i]);
                cout<<ar[k][i]<<" ";
            }
        }
    }
}
int main(){
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int nrows=3;
    int mcols=3;
    wavy(arr,nrows,mcols);

    return 0;
}