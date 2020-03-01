/*Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
true or false
Constraints :
1 <= N <= 10^3
Sample Input :
3
9 8 10
8
Sample Output :
true
*/
bool checkNumber(int input[], int size, int x) {
 for(int i=0;i<size;i++){
     if(input[i]==x){return true;}
 }
return false;
}
