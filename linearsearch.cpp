#include<iostream>
using namespace std;

bool search(int arr[], int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}return 0;
}

int main(){
	
	int arr[5]={1,4,6,5,8};
	cout<<"enter the element"<<endl;
	
	int key;
	cin>>key;
	
	bool found=search(arr,5,key);
	if(found){
		cout<<"key is present";
	}
	else{
		cout<<"key is absent";
	}
}
