#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;
using namespace std;

void solve(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    if(b>=n){
       if((a+c)>=n){
            cout<<"YES"<<endl;
       }
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

int main(){
    fast;

    test(t)
        solve();

re;
}