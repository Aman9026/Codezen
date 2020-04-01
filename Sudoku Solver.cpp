/*
PROBLEM:

Given a 9*9 sudoku board, in which some entries are filled and others are 0 (0 indicates that the cell is empty), you need to find out whether the Sudoku puzzle can be solved or not i.e. return true or false.
Input Format :
9 Lines where ith line contains ith row elements separated by space
Output Format :
 true or false
Sample Input :
9 0 0 0 2 0 7 5 0 
6 0 0 0 5 0 0 4 0 
0 2 0 4 0 0 0 1 0 
2 0 8 0 0 0 0 0 0 
0 7 0 5 0 9 0 6 0 
0 0 0 0 0 0 4 0 1 
0 1 0 0 0 5 0 8 0 
0 9 0 0 7 0 0 0 4 
0 8 2 0 4 0 0 0 6
Sample Output :
true







CODE:
*/


bool FindUnassignedLocation(int grid[9][9], int &row, int &col);
bool isSafe(int grid[9][9], int row, int col, int num);
 

bool sudokuSolver(int grid[][9]){
    int row,col;
    if(!FindUnassignedLocation(grid,row,col)){
        return true;
    }
    for(int num=1;num<=9;num++){
        if(isSafe(grid,row,col,num)){
            grid[row][col] = num;
            if(sudokuSolver(grid)){
                return true;
            }
            else {
                grid[row][col]=0;
            }
        }
    }
    return false;
}

bool FindUnassignedLocation(int grid[9][9], int &row, int &col){
    for(row=0;row<9;row++){
        for(col=0;col<9;col++){
            if(grid[row][col]==0){
                return true;
            }
        }
    }
    return false;
}

bool UsedInRow(int grid[9][9], int row, int num)
{
    for (int col = 0; col < 9; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool UsedInCol(int grid[9][9], int col, int num)
{
    for (int row = 0; row < 9; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool UsedInBox(int grid[9][9], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row+boxStartRow][col+boxStartCol] == num)
                return true;
    return false;
}

bool isSafe(int grid[9][9], int row, int col, int num)
{
    return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) &&
           !UsedInBox(grid, row - row % 3 , col - col % 3, num);
}
