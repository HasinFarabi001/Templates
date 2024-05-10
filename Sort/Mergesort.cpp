// Written by Hasin Farabi
// 10/05/2024

//FUNCTION : mergesort(starting index,last index,array)

#include<bits/stdc++.h>
using namespace std ;

void merge(int l,int r,int mid,int arr[]){
	int ls = mid-l+1 ;
	int rs = r-mid ;
	int L[ls+1] ;
	int R[rs+1] ;
	for(int i = 0;i<ls;i++)
		L[i] = arr[i+l] ;
	for(int i=0;i<rs;i++)
		R[i] = arr[mid+1+i] ;

	L[ls] = R[rs] = INT_MAX ;

	int l_i = 0;
	int r_i = 0;
	for(int i = l;i<=r;i++){
		if(L[l_i] >= R[r_i]){
			arr[i] = R[r_i] ;
			r_i ++ ;
		}else{
			arr[i] = L[l_i] ;
			l_i ++ ;
		}
	}
	return ;

}

void mergesort(int l, int r,int arr[]){
	if(l==r)return ;
	int mid = (l+r)/2 ;
	mergesort(l,mid,arr) ;
	mergesort(mid+1,r,arr) ;
	merge(l,r,mid,arr) ;
	return ;
}

int main(){
	int n ;
	cin >> n ;
	int arr[n] ;
	for(int i=0;i<n;i++)
		cin >> arr[i] ;

	mergesort(0,n-1,arr) ;

	for(int i=0;i<n;i++)
		cout << arr[i] << " " ;
  cout << endl ; 

}
