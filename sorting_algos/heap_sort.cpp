#include "../algos/heap_algos.cpp"

template<class T>
void heapSort(T *arr,int length){
	buildMaxHeap(arr,length);
	for(int i=length-1;i>=0;i--){
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		max_heapify(arr,0,i-1);
	}
}