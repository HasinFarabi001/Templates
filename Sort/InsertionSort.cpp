// Created by Hasin Farabi
// Created on 27/01/2023

#include<bits/stdc++.h>
using namespace std ;
void InsertionSort(int arr[],int n){
    int temp, j ;
    for(int i = 1;i < n;i++){
        temp = arr[i] ;
        j = i-1 ;
        for(;j >= 0 && arr[j] > temp;j--){
            arr[j+1] = arr[j] ;
        }
        arr[j+1] = temp ;
    }
    return ;
}

int main()
{
    int arr[] = {4, 6, 1, -1, 56, 34, 2, 12, 34} ;
    int n = 9 ;
    InsertionSort(arr, n) ;
    for(int i = 0;i < n;i++)cout << arr[i] << " " ;
    cout << endl ;
    return 0 ;
}
