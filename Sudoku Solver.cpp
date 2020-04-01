/*
PROBLEM:









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
