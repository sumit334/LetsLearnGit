#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,q;
	vector<int> items;
	cin >> n >> q;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		items.push_back(ele);
	}
	sort(items.begin(),items.end(),greater<int>());
	while(q--){
		
		long long x,y;
		int sum=0;
	 vector<int> ans;
		cin >> x >> y;
		for(int i=0;i<x;i++){
			ans.push_back(items[i]);
		}
		sort(ans.begin(),ans.end());
        for(int i=0;i<y;i++){
        	sum+=ans[i];
        }
        cout<<sum<<endl;
        
	}
}