#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void zero(int arr[],int n){
    int i=0;
    int j=0;
    while(j<n){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            
        }
        j++;
    }
}
int main(){
    int arr[]={0,2,1,0,3,0};
    zero(arr,6);
    printArray(arr,6);

    return 0;
}