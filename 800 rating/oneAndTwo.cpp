//Hello i am Vishal Vishwakarma
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int totalCntOfTwo = 0;
        int currCntOfTwo = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == 2){
                totalCntOfTwo++;
            }
        }
        if(totalCntOfTwo % 2!=0){
            cout<<-1<<endl;
        }
        else{
        for(int i = 0;i<n;i++){
            if(arr[i] == 2){
                currCntOfTwo++;
            }
            if(currCntOfTwo == totalCntOfTwo/2){
                cout<<i+1<<endl;
                break;
            }
        }
        }
    }
}