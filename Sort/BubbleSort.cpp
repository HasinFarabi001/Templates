#include<bits/stdc++.h>
using namespace std ;
void bubblesort(int arr[],int n){
    int isit, temp ;
    for(int i = 0;i < n;i++){
        isit = 1 ;
      
        for(int j = 0;j < n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
                isit = 0 ;
            }
        }
      
        if(isit)break ;
    }
    return ;
}

int main()
{
    int arr[] = {4, 6, 1, -1, 56, 34, 2, 12, 34} ;
    int n = 9 ;
    bubblesort(arr, n) ;
    for(int i = 0;i < n;i++)cout << arr[i] << " " ;
    cout << endl ;
    return 0 ;
}
