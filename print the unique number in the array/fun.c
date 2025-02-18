#include<stdio.h>
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={2,3,2,3,7};
    printf("%d\n",unique(arr,5));
    printArray(arr,5);
    return 0;
}