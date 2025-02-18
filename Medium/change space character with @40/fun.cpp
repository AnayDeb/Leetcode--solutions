#include<iostream>
using namespace std;
string newString(string st){
    string temp="";
    for(int i=0;i<st.length();i++){
        if(st[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(st[i]);
        }
    }
    return temp;
}
int main(){
    string str="my name is anay";
    cout<<newString(str);

    return 0;
}