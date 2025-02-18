#include<iostream>
#include<stack>
using namespace std;
bool validParenthesis(string str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='['||ch=='{'||ch=='('){
            st.push(ch);
        }else{
            if(!st.empty()){
                char top=st.top();
                if((ch==']' && top=='[')||
                (ch==')' && top=='(')||
                (ch=='}' && top=='{')){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }else{
        return false;
    }
}
int main(){
    string str="[({})]";
    if(validParenthesis(str)){
        cout<<"valid hai bhai"<<endl;
    }else{
        cout<<"valid nhi hai bhai"<<endl;
    }


    return 0;
}