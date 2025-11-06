//Hello i am Vishal Vishwakarma
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int s =0;
        int e = n-1;
        while(s < e){
            if(str[s] == '1' && str[e] == '0' || str[s] == '0' && str[e] == '1'){
                s++;
                e--;
            }
            else{
                break;
            }
        }
        if(e-s+1>0){
            cout<< e-s +1<<endl;
        }
        else{
            cout<<0<<endl;
        }

    }
}