/*
PROBLEM:









CODE:
*/

#include<bits/stdc++.h>
using namespace std;
int board[20][20] = {0};

void ratMaze(int maze[][20], int n, int row, int col){
    if(row == n-1 && col == n-1){
        for(int i = 0; i< n; i++){
            for(int j = 0; j<n; j++){
                cout<<board[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    if(row < n-1 && col < n){
        if(board[row + 1][col] == 0 && maze[row+1][col] == 1 ){
            board[row+1][col] = 1;
            ratMaze(maze, n, row+1, col);
            board[row+1][col] = 0;
        }
    }
    if(row < n && col < n+1){
        if(board[row][col+1] == 0 && maze[row][col+1] == 1 ){
            board[row][col+1] = 1;
            ratMaze(maze, n, row, col+1);
            board[row][col+1] = 0;
        }
    }
    if(row >= 0 && col >= 1 && row<n && col<n){
        if(board[row][col-1] == 0 && maze[row][col-1] == 1 ){
            board[row][col-1] = 1;
            ratMaze(maze, n, row, col-1);
            board[row][col-1] = 0;
        }
    }
    if(row >=1 && col >=0 && row<n && col<n){
        if(board[row - 1][col] == 0 && maze[row-1][col] == 1 ){
            board[row-1][col] = 1;
            ratMaze(maze, n, row-1, col);
            board[row-1][col] = 0;
        }
    }
}

void ratInAMaze(int maze[][20], int n){
  memset(board,0,15*15*sizeof(int));
  board[0][0] = 1;
  ratMaze(maze,n,0,0);
  return;
}
