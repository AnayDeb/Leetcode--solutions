#include <iostream>//https://www.geeksforgeeks.org/problems/the-celebrity-problem/1
#include <stack>
#include <vector>
using namespace std;
bool knows(vector<vector<int>>&M ,int a ,int b){
    if(M[a][b]==1){
        return true;
    }else{
        return false;
    }
}
int findceleb(vector<vector<int>>&mat){
    stack<int>s;
    int n=mat.size();
    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()!=1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(knows(mat,a,b)){
            s.push(b);
        }else{
            s.push(a);
        }
    }
    int ans=s.top();
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(mat[ans][i]==0){
            zerocount++;
        }
    }
    if(zerocount!=n){
        return -1;
    }
    int onecount=0;
    for(int i=0;i<n;i++){
        if(mat[i][ans]==1){
            onecount++;
        }
    }
    if(onecount!=n-1){
        return -1;
    }
    return ans;
}
int main(){
    vector<vector<int>> mat = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    cout<<findceleb(mat);
    
    return 0;
}