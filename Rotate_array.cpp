/*
PROBLEM:

Given a random integer array of size n, write a function that rotates the given array by d elements (towards left)
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer d
Output Format :
Updated array elements (separated by space)
Constraints :
1 <= N <= 1000
1 <= d <= N
Sample Input :
7
1 2 3 4 5 6 7
2
Sample Output :
3 4 5 6 7 1 2

CODE:
*/

void Rotate(int arr[], int d, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing the output is handled automatically.
     */

     int j = 0;
    int * temparr = new int [d];
    for(int i=0;i<d;i++){temparr[i]=arr[i];}
    for(int i=0;i<size-d;i++){arr[i]=arr[i+d];}
    for(int i=size-d;i<size;i++){arr[i]=temparr[j++];}
    delete temparr;
}	
