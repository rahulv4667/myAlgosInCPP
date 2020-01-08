#include<iostream>
#include"search_algos/linear_search.cpp"
using namespace std;

int main(){
  int arr[]={7,6,2,3,4,1,5,8};
  cout<<linear_search_first_index(arr,8,1)<<endl;
}