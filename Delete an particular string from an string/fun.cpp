#include<iostream>
using namespace std;
string deletes(string st,string subs){
    while(st.length()!=0 && st.find(subs)<st.length()){
        st.erase(st.find(subs),subs.length());
    }
    return st;
}
int main(){
    string str="abbababcccd";
    string substr="abc";
    cout<<deletes(str,substr);
    
    return 0;
}