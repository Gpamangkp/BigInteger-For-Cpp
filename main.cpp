#include<bits/stdc++.h>
#include "bigint.h"

using namespace std;


int main(){
	int n;
	cin>>n;
	bigint arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,greater<bigint>());
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}