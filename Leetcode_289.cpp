#include<iostream>
#include<vector>
using namespace std;

void gameofLife(vector<vector<int>>& board) {

    int m = board.size();
    int n = board[0].size();

    vector<vector<int>> temp= board;   // copy

    for (int i =0;i<m;i++) {
        for (int j=0;j<n;j++) {

            int count =0;


            //check all 8 neighbours safely
            if (i>0 && temp[i-1][j]==1) count++;   //i>0 ensures row above exists

            if (j>0 && temp[i+1][j]==1) count++;  // i<m-1 ensures it has bottom neighbour


        }
    }
}


int main() {

}