#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void makeZero(vector<vector<int> > &matrix,int row , int col){
    for(int i = row-1; i>=0; i--){
        for(int j =col-1; j>=0; j--){
            matrix[i][j] = 0;
        }
    }

    for (int i = row+1; i<matrix.size(); i++){  
        for(int j = 0; j<matrix[i].size(); j++){
            matrix[i][j] = 0;
        }
    }
}


void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    vector<vector<int>> matrixTemp = matrix;
    for (int i = 0; i < matrix.size();i++){
        for(int j = 0; j < matrix[i].size();j++){
            if(matrix[i][j]==0){
                makeZero(matrixTemp,i,j);
            }
        }
    }
    matrix.clear();
    matrix = matrixTemp;
    return ;
}

int main()
{
    int test_case; 
    cin>>test_case;
    while(test_case--)
    {
        int c,r;
        cin>>c>>r;
        vector<vector<int>> input;
        for (int i=0; i<c; i++)
        {
            vector<int> innerInput;
            for (int j=0; j<r; j++)
            {
                int test;
                cin>>test;
                innerInput.push_back(test);
            }
            input.push_back(innerInput);
        }
        setZeros(input);
    }

}
