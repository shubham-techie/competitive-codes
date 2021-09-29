#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(n) while(n--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test(t) int t; cin>>t; w(t)
#define endl "\n";
#define re return 0;

using namespace std;
typedef long long int ll;

void solve(){
    string str;
    cin>>str;

    int a(0),b(0),c(0);
    int len=str.length();
    f(i,0,len){
        a+=(str[i]=='A');
        b+=(str[i]=='B');
        c+=(str[i]=='C');  
    }

    if(b==a+c){
        cout<<"YES"<<endl;}
    else
        cout<<"NO"<<endl;
}

int main(){
    fast;

    test(t)
        solve();

re;
}