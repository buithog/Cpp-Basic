#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	cin>>n;
	long a[10000];
	for(int i=0;i<n;i++){
		cin>>a[i];}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i] != a[i+1]) cout<<a[i]<<" ";}
	return 0;}
