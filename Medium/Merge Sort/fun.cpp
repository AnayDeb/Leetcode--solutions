#include<iostream>
using namespace std;
void Merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    //creating new arrays through heap memory
    int *first=new int[len1];
    int *second=new int[len2];
    //first array mei elements insert horha first half ka
    int mainIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIndex];
        mainIndex++;
    }
    //second half ka elements insert kar rhe second array mei
    mainIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIndex];
        mainIndex++;
    }
    //merge karenge do arrays ko ek mai
    int index1=0;
    int index2=0;
    mainIndex=s;
    while(index1<len1  &&  index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex]=first[index1];
            index1++;
            mainIndex++;
        }else{
            arr[mainIndex]=second[index2];
            index2++;
            mainIndex++;
        }
    }
    //first mai bachgya to daldo baki ka main array mai
    while(index1<len1){
        arr[mainIndex]=first[index1];
        index1++;
        mainIndex++;
    }
    //second mai bachgya toh daldo baki ka main array mai
    while(index2<len2){
        arr[mainIndex]=second[index2];
        index2++;
        mainIndex++;
    }
}
void MergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    //sort left side
    MergeSort(arr,s,mid);
    //sort right side
    MergeSort(arr,mid+1,e);
    
    
    //merge sorted array
    Merge(arr,s,e);

}
int main(){
    int arr[]={8,77,66,99,33,4};
    int n=6;
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}