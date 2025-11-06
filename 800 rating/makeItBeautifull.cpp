#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[59];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		if(a[1]==a[n]){
			cout<<"NO"<<'\n';
		}else{
			cout<<"YES"<<'\n';
			cout<<a[1]<<' ';
			for(int i=2;i<=n;i++){
				cout<<a[n-i+2]<<' ';
			}
			cout<<'\n';
		}
	}
	return 0;
}