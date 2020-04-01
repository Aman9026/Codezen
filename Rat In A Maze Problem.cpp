/*
PROBLEM:


You are given a N*N maze with a rat placed at maze[0][0]. Find and print all paths that rat can follow to reach its destination i.e. maze[N-1][N-1]. Rat can move in any direc­tion ( left, right, up and down).
Value of every cell in the maze can either be 0 or 1. Cells with value 0 are blocked means rat can­not enter into those cells and those with value 1 are open.
Input Format
Line 1 : Integer N
Next N Lines : Each line will contain ith row elements (separated by space)
Output Format :
One Line for every possible solution. 
Every line will have N*N maze elements printed row wise and are separated by space. Only cells that are part of solution path should be 1, rest all cells should be 0.
Sample Input 1 :
3
1 0 1
1 0 1
1 1 1
Sample Output 1 :
1 0 0 1 0 0 1 1 1 
Sample Output 1 Explanation :
Only 1 path is possible
Sample Input 2 :
3
1 0 1
1 1 1
1 1 1
Sample Output 2 :
1 0 0 1 1 1 1 1 1 
1 0 0 1 0 0 1 1 1 
1 0 0 1 1 0 0 1 1 
1 0 0 1 1 1 0 0 1 
Sample Output 2 Explanation :
4 paths are possible






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
