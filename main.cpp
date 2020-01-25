#include<iostream>
#include"search_algos/linear_search.cpp"
#include"sorting_algos/heap_sort.cpp"

using namespace std;

int main(){
  int arr[100];
  int n;
  cin>>n;
  for(int i=0;i<n;i++) cin>>arr[i];
  //cout<<linear_search_first_index(arr,8,1)<<endl;
  heapSort(arr,n);
  for(int i=0;i<n;i++) std::cout<<arr[i]<<"\n";
}