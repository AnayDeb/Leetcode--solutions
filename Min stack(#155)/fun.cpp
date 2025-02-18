#include<iostream>
#include<stack>
using namespace std;
class minstack{
    public:
    stack<pair<int,int>>s;
    minstack(){

    }

    void push(int val){
        if(s.empty()){
            s.push({val,val});
        }else{
            int minval=s.top().second;
            if(val<minval){
                minval=val;
            }
            s.push({val,minval});
        }
    }
    void pop(){
        if(!s.empty()){
            s.pop();
        }
    }
    int getmin(){
        if(!s.empty()){
            return s.top().second;
        }else{
            return -1;
        }
    }
    int top(){
        if(!s.empty()){
            return s.top().first;
        }else{
            return -1;
        }
    }
};
int main(){
    minstack st;
    st.push(19);
    st.push(20);
    st.push(9);
    cout<<st.getmin()<<endl;
    st.pop();
    cout<<st.getmin()<<endl;



    return 0;
}