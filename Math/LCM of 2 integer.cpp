#include<bits/stdc++.h>
using namespace std ;

long long gcd(long long a,long long b){
	if(a%b == 0)return b ;
	
	long long temp = b ;
	b = a%b ;
	a = temp ;

	return gcd(a, b) ;
}
long long lcm(long long a,long long b){
  
  // a * b = lcm(a,b) * gcd(a,b) so, lcm(a,b) = (a*b)/gcd(a,b)
  return (a / gcd(a,b)) * b ;
}

int main () 
{
	cout << lcm(5, 10) << endl ; 
	return 0 ; 
}
