#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag = false;
        vector<int> nums(n);
        for(int i =0;i<n;i++){
            cin>>nums[i];
            if(nums[i] == k){
                flag = true;
            }
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}