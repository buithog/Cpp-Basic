#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while(t--){
		string s;
		cin>>s;
		int dem =1;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i+1]) dem+=1;
			else {
				cout<<s[i]<<dem;
				dem=1;
				}}
		cout<<endl;
		}}
