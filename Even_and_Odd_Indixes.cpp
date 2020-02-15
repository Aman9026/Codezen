
/*
PROBLEM:
Given an array of integers, print two integer values:
First, the sum of all numbers which are even as well as whose index are even.
Second, the sum of all numbers which are odd as well as whose index are odd.
Print the two integers space separated. (Arrays is 0-indexed)
Input:
Given an integer denoting the size of array.
Next line will have a line containing ‘n’ space separated integers.
Constraints:
1<=n<=10^5
1 <= Ai <= 10^6 
Output:
Two space separated integers denoting even and odd sums respectively.
Sample Input:
5
2 3 5 1 4
Sample Output:
6 4


CODE:
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,even=0,odd=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        
        if((arr[i]%2==0) && i%2==0)
        {
            even+=arr[i];
        }
        else if((arr[i]%2!=0) && i%2!=0)
        {
            odd+=arr[i];
        }   
    }
    cout<<even<<" "<<odd;
	return 0;
}

//https://github.com/Aman9026/Codezen
