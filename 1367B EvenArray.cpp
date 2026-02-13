#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int x;

        int odd=0;
        int even=0;
        for(int i=0; i<n; i++){
            cin>>x;

            if(x%2!=i%2){
                if(x%2){
                    odd++;
                }
                else{
                    even++;
                }
            }
        }
        if(odd==even){
            cout<<even<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
