//Hello i am Vishal Vishwakarma
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> dup = nums;
    sort(dup.begin(),dup.end());
    for(int i = 1;i<n-1;i++){
        if(nums[i] > nums[i-1]   && nums[i] > nums[i+1] ){
            swap(nums[i],nums[i+1]);
        }
      
    }
    if(dup[0]!=nums[0] || dup[n-1] != nums[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
}