/*
PROBLEM:









CODE:
*/
#include <bits/stdc++.h>

using namespace std;
int power(int x, int n){
	if (n==0)
	{
		return 1;
	}

	return x*power(x, n-1);


}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	
	int x, n;
	cin>>x>>n;

	cout << power(x,n) << '\n';


	return 0 ; 
}
