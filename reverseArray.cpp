#include<iostream>
using namespace std;

int reverse(int arr[],int size){
	int start=0;
	int end=size-1;
	
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
int main(){
	int arr[5]={1,3,4,5,6};
	int brr[]={3,5,6,7,8};
	
	 reverse(arr,5);
	 reverse(brr,5);
	
	printArray(arr,5);
	printArray(brr,5);
}
