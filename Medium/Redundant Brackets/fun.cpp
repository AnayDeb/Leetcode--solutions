#include<iostream>//https://www.naukri.com/code360/problems/redundant-brackets_975473?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM
#include<stack>
using namespace std;
bool findredundant(string &s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if((ch=='(')||(ch=='*')||(ch=='/')||(ch=='+')||(ch=='-')){
            st.push(ch);
        }else{
            if(ch==')'){
                bool redundant=true;
                while(st.top()!='('){
                    char top=st.top();
                    if((top=='*')||(top=='/')||(top=='+')||(top=='-')){
                        redundant=false;
                    }
                    st.pop();
                }
                if(redundant==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main(){
    string s="(a+c*b)";
    if(findredundant(s)){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}