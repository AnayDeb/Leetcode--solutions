#include<stdio.h>
void printArray(int n,int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void revArray(int n,int arr[]){
    int temp; //*/there is a logic in reversing this array we iterate a loop from 0 to n/2 and swap the values of i to (n-1-i);
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }

}
int main(){
    int arr[]={1,2,3,4,5};
    printArray(5,arr);
    revArray(5,arr);
    printArray(5,arr);

    return 0;

}