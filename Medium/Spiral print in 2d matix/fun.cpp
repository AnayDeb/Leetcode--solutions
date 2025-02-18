#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int>temp;
    int row=matrix.size();
    int col=matrix[0].size();
    int count=0;
    int total=row*col;

    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingcol=col-1;
    while(count<total){

    for(int i=startingCol;count<total && i<=endingcol;i++){
        temp.push_back(matrix[startingRow][i]);
        count++;
    }
    startingRow++;

    for(int i=startingRow;count<total && i<=endingRow;i++){
        temp.push_back(matrix[i][endingcol]);
        count++;
    }
    endingcol--;

    for(int i=endingcol;count<total && i>=startingCol;i--){
        temp.push_back(matrix[endingRow][i]);
        count++;
    }
    endingRow--;

    for(int i=endingRow;count<total && i>=startingRow;i--){
        temp.push_back(matrix[i][startingCol]);
        count++;
    }
    startingCol++;
    }
    return temp;

}
int main(){
    vector<vector<int>>matrix={{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    
    vector<int> result = spiralOrder(matrix);

    
    for (int i=0;i<result.size();i++) {
        cout << result[i]<<" ";
    }
    cout << endl;

    return 0;
}