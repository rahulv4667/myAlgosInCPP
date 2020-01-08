#include<iostream>

using namespace std;

template<class T>
int linear_search_first_index(T *arr,int n,T val){
  for(int i=0;i<n;i++){
    if(arr[i]==val) return i;
  }
  return -1;
}

template<class T>
bool linear_search_bool(T *arr,int n,T val){
  for(int i=0;i<n;i++){
    if(arr[i]==val) return true;
  }
  return false;
}