#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];}
			long max=0;
			for(int i=0;i<n;i++){
				if(a[i]>max){
					max=a[i];}}
					cout<<max<< endl;}}
