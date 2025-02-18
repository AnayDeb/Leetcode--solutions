#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>>&matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
            cout<<matrix[i][j]<<" ";
        } 
        cout<<endl;
    }
}
void rotate(vector<vector<int>>&matrix){
    int row=matrix.size();
    for(int i=0;i<row;i++){
        int j=i+1;
        while(j<row){
            swap(matrix[i][j],matrix[j][i]);
            j++;
        }
    }
    for(int i=0;i<row;i++){
        int j=0;
        int k=row-1;
        while(j<k){
            swap(matrix[i][j],matrix[i][k]);
            j++;
            k--;
        }
    }
}
int main(){
    vector<vector<int>>matrix={{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    
    rotate(matrix);
    print(matrix);

    return 0;
}