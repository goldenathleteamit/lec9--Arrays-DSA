#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"size is";
	cin>>size;
	
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	};
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<max<<endl;
	
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<min;
}


