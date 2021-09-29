#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;
using namespace std;


void solve(){
int d,l,r;
cin>>d>>l>>r;

if(d<l)
    cout<<"Too Early"<<endl;

if(d>r)
    cout<<"Too Late"<<endl;

if(d>=l && d<=r)
    cout<<"Take second dose now"<<endl;
}


int main(){
    fast;

    test(t)
        solve();

re;
}