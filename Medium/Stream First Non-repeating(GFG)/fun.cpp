#include<iostream>//https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;
string firstnonrepeating(string &s){
    unordered_map<char,int>map;
    queue<char>q;
    string ans="";
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        map[ch]++;
        q.push(ch);
        while(!q.empty() && map[q.front()]>1){
            q.pop();
        }

        if(!q.empty()){
            ans.push_back(q.front());
        }else{
            ans.push_back('#');
        }
    }
    return ans;
}
int main(){
    string str= "aabc";
    string ans=firstnonrepeating(str);
    cout<<ans<<endl;

    return 0;
}