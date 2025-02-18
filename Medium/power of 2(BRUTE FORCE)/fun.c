#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool power_of_2(int n){
    for(int i=0;i<=30;i++){
        int ans=pow(2,i);
        if(ans==n){
            return true;
        }
        
    }return false;

}
int main(){
    int n=31; 
    printf("%d",power_of_2(n));  

    return 0;
    
}