#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[],int n){
    int minindex=0;
    for(int i=0;i<n-1;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp;
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    
}
int main(){
    int arr[]={4,3,2,1,6,7,8,9};
    sort(arr,8);
    printArray(arr,8);
    return 0;
}