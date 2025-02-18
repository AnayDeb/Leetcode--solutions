#include<iostream>
using namespace std;
bool palindrome(int x){
    if(x<0){
        return false;
    }
    int original=x;
    int reversed=0;//use long long in leetcode kyuki udhar bohot bade bade number bhi askate hai;
    while(x!=0){
        int digit=x%10;
        reversed=reversed*10+digit;
        x=x/10;
    }
    if(original==reversed){
        return true;
    }
    return false;
}
int main(){
    int x=12121;
    if(palindrome(x)){
        cout<<"palindrome hai bhai "<<endl;
    }else{
        cout<<"nahi hai re"<<endl;
    }

    return 0;
}