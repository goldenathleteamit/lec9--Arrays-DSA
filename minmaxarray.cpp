#include<iostream>
using namespace std;

//int main(){
//	int size;
//	cout<<"size is";
//	cin>>size;
//	
//	int arr[size];
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	};
//	int max=arr[0];
//	for(int i=0;i<size;i++){
//		if(max<arr[i]){
//			max=arr[i];
//		}
//	}
//	cout<<max<<endl;
//	
//	int min=arr[0];
//	for(int i=0;i<size;i++){
//		if(min>arr[i]){
//			min=arr[i];
//		}
//	}
//	cout<<min;
//}

//linear search
int main(){
	int arr[]={2,3,4,5,7};
	int key=4;
	int ans=-1;
	
	for(int i=0;i<5;i++){
		if(arr[i]==key){
			ans=i;	
		}
	}cout<<ans;
}
