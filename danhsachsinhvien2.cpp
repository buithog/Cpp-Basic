#include<bits/stdc++.h>
using namespace std;
string chuan(string &name){
	stringstream ss(name);
	string res="";
	string token;
	while(ss>>token){
		res+= toupper(token[0]);
		for(int i=1;i< token.length();i++){
			res+=tolower(token[i]);}
					res+=" ";}
	
			res.erase(res.length()-1);
			return res;}
struct SinhVien {
	string ten,id,lop,ns;
 //   string ma;
	float gpa;
	};
void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
	cin.ignore();
	getline(cin,a[i].ten);
	a[i].ten =chuan(a[i].ten);
	cin>>a[i].lop>>a[i].ns>>a[i].gpa;
	
	if(a[i].ns[1]=='/') a[i].ns="0"+a[i].ns;
	if(a[i].ns[4]=='/') a[i].ns.insert(3,"0");
	}}
void in(SinhVien a[],int N){
	for(int i=0;i<N;i++){
		
		string s = to_string(i+1);
		while(s.size()<3){ s="0"+s;}
		cout<<"B20DCCN"<<s<<" ";
		cout<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;}}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
