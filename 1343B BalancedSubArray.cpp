#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum1=0;
        int sum2=0;

        if(n%4!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<n-1; i+=2){
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }
    }
    return 0;
}
