// Written by Hasin Farabi
// 09/05/2024

#include<bits/stdc++.h>
using namespace std ;


void selection_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int index = i ;
		for(int j = i+1;j<n;j++){
			if(arr[j] < arr[index]){
				index = j ;
 			}
		}
		swap(arr[i],arr[index]) ;
	}
	return ;
}

int main(){
	int n ;
	cin >> n ;
	int arr[n] ;
	for(int i = 0;i<n;i++){
		cin >> arr[i] ;
	}
	selection_sort(arr, n) ;
	for(int i = 0;i<n;i++){
		cout << arr[i] << " " ;
	}
	cout << endl ;
}
