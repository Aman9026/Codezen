/*
PROBLEM:
Given a 2-d square matrix of order ‘n’, find the sum of elements of both diagonals and all boundaries elements. Boundary elements refer to the elements present on all the four boundaries of matrix.
Input:
First line will have a single integer ‘n’ denoting the order of matrix.
Next ‘n’ lines will have ‘n’ space separated integers each denoting the elements of matrix.
Constraints:
1<=n<=100
Output:
Print a single integer denoting the sum.
Sample input:
3
1 2 3
4 5 6
7 8 9
Sample Output:
45
CODE:
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=0;
    cin>>n;
    int** array= new int*[n];
    for(int i=0;i<n;i++)
    {
        array[i]= new int[n];
        for(int j=0;j<n;j++)
        {
            cin>> array[i][j];
        }
        
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {    
             sum+=array[i][j];
                array[i][j]=0;
            }
            if(i==n-1)
            {
             sum+=array[i][j];
                array[i][j]=0;   
            }
            if(j==0)
            {    
             sum+=array[i][j];
                array[i][j]=0;
            }
            if(j==n-1)
            {
             sum+=array[i][j];
                array[i][j]=0;   
            }
            
            if(i==j)
            {
             sum+= array[i][j];
                array[i][j]=0;
                
            }
            if(i+j == ((n+1)-2))
            {
                sum += array[i][j];
                array[i][j]=0;
            }
        }
    }
   
    cout<<sum;
	return 0;
}
//https://github.com/Aman9026/Codezen
