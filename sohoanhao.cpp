#include<bits/stdc++.h>
using namespace std;
int nt(long long n){
	for(int i=0;i<sqrt(n);i++){
		if(n%i == 0)
			return 0;}
		return n>1;
		}
	
int check(long long n){
	for(int i=0;i<32;i++){
		if(nt(i)){
			int tmp =(int)pow(2,i)-1;
			if(nt(tmp)){
				long long hh= 1ll*tmp*(int)pow(2,i-1);
				if(hh=n) return 1;
				}
			}
		}
		return 0;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<check(n)<<endl;
		}
	}
