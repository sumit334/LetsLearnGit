#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	for(int i=0;i<3;i++){
		int ele;
		cin>> ele;
		v.push_back(ele);
	}
	sort(v.begin(),v.end());
	cout<< v[2]-v[1]+v[1]-v[0]<<endl;
}