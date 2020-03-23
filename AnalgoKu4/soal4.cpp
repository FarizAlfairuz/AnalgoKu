#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int arr[100],n,temp;
	
	cout<<"Enter the number of data element to be sorted: ";cin>>n;
	
	
	for(int i=0;i<n;++i){
		cout<<"Enter element "<<i+1<<" : ";cin>>arr[i];
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"\nSorted Data: "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	
}