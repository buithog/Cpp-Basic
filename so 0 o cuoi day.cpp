#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>> a[i];} sort(a,a+n);
			for(int i=0;i<n;i++){
				if(a[i] !=0) {cout<< a[i]<<" ";}}
				for(int i=0;i<n;i++){
					if(a[i]==0) cout<<a[i]<<" ";}
					cout<<endl;}}
