#include <iostream>


template<class T>
void max_heapify(T *arr,int low,int high){
	int temp=arr[low];
	int largeIndex=2*low+1;
	while(largeIndex<=high){
		if(largeIndex<high)
			if(arr[largeIndex]<arr[largeIndex+1]) largeIndex++;
		if(temp>arr[largeIndex]) break;
		else {
			arr[low]=arr[largeIndex];
			low=largeIndex;
			largeIndex=2*low+1;
		}
	}
	arr[low]=temp;
	
}

template<class T>
void buildMaxHeap(T *arr,int length){
	for(int i=(length/2)-1;i>=0;i--){
		max_heapify(arr,i,length);
	}
}



template<class T>
void min_heapify(T *arr,int low,int high){
	int temp=arr[low];
	int largeIndex=2*low+1;
	while(largeIndex<=high){
		if(largeIndex<high)
			if(arr[largeIndex]>arr[largeIndex+1]) largeIndex++;
		if(temp<arr[largeIndex]) break;
		else {
			arr[low]=arr[largeIndex];
			low=largeIndex;
			largeIndex=2*low+1;
		}
	}
	arr[low]=temp;
	
}

template<class T>
void buildMinHeap(T *arr,int length){
	for(int i=(length/2)-1;i>=0;i--){
		min_heapify(arr,i,length);
	}
}