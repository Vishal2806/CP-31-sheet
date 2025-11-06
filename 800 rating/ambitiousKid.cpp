//Hello i am Vishal Vishwakarma
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int res = INT_MAX;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(arr[i] < 0){
            arr[i] = -arr[i];
        }
        res = min(res,arr[i]);
    }
    cout<<res<<endl;
  
}