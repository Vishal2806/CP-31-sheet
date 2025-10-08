//Hello i am Vishal Vishwakarma
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i =0;i<n;i++){
            cin>>nums[i];
        }
        bool isSorted = true;
        for(int i = 0;i< n - 1;i++){
            if(nums[i] > nums[i+1]) {
                isSorted = false;
            }
        }

        if(k <= 1 && !isSorted){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}   