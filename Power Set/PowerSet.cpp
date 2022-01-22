// Created by Hasin Farabi
// Created on 23/01/2023
//

#include<bits/stdc++.h>
using namespace std ;

// Caution : the powerset will contain a null vector as empty set 
void powersetbuilder(int index,vector <int> sub,vector <int> arr,vector<vector<int>>& powset){
    
  if(index == arr.size()){
        powset.push_back(sub) ;
        return ;
    }
    powersetbuilder(index+1,sub,arr,powset) ;
  
    sub.push_back(arr[index]) ;
  
    powersetbuilder(index+1,sub,arr,powset) ;
  
    return ;
}

vector<vector<int>> createPS(vector <int> arr){
    vector<vector<int>> powset ;
    vector <int> sub ;
  
    powersetbuilder(0,sub,arr,powset) 
      ;
    //sorting the powerset in lexicographically order 
    sort(powset.begin(),powset.end()) ;
  
    return powset ;
}

void printPS(vector<vector<int>> &powerset){
   
  for(int i = 0;i < powerset.size();i++){
      
        vector<int> temp = powerset[i] ;
      
        for(auto j : temp) {
            cout << j << " " ;
        }
        cout << endl ;
    }
}

int main()
{
    vector <int> v = {1 , 2, 3, 4 } ;
  
    vector<vector<int>> powerset = createPS(v) ;
  
    printPS(powerset) ;
  
    return 0 ;
}
