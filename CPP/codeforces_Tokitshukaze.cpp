#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int count=0;
		vector<int> v;
		cin>>n;
		for(int i=0;i<n;i++){
              int ele;
              cin>>ele;
              v.push_back(ele);
		}
		for(int i=0;i<n;i++){
			if(v[i]!=0){
			if(v[i]<v[i+1]){
				v[i+1]=v[i];
				count++;
				v[i]=0;
				count++;
				
			}
			else if(v[i]>v[i+1]){
				v[i]=v[i+1];
				count++;
				v[i]=0;
				count++;
			}
			
                
			
			else {
				v[i]=0;
				
				count++;
			}
		}
		}
		cout<< count <<endl;
	} 
}