#include<iostream>

using namespace std;

template<class T>
bool binary_search_bool(T *arr,int beg,int end,T val){
  if(beg<end){
    int mid=(beg+end)/2;
    if(arr[mid]==val) return true;
    else if(arr[mid]<val) return binary_search_bool(arr,beg,mid,val);
    else return binary_search_bool(arr,mid+1,end,val);
  }
  else if(beg==end&&arr[beg]==val) return true;
  else return false;
  
}

template<class T>
int binary_search_index(T *arr,int beg,int end,T val){
  if(beg<end){
    int mid=(beg+end)/2;
    if(arr[mid]==val) return mid;
    else if(arr[mid]<val) return binary_search_bool(arr,beg,mid,val);
    else return binary_search_bool(arr,mid+1,end,val);
  }
  else if(beg==end&&arr[beg]==val) return beg;
  else return -1;
  
}