#include<bits/stdc++.h>
using namespace std ;

long long gcd(long long a,long long b){
	if(a%b == 0)return b ;
	
	long long temp = b ;
	b = a%b ;
	a = temp ;

	return gcd(a, b) ;
}

int main () 
{
	cout << gcd(6546,456546) << endl ; 
	return 0 ; 
}
