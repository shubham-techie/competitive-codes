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
    ll n;
    cin>>n;

    vector<int> v;

    int num;
    cin>>num;
    v.push_back(num);

    while(--n){
        cin>>num;

        if(num<v[0])
            v.insert(v.begin(),num);
        else
            v.push_back(num);
    }

    for(auto& itr:v)
        cout<<itr<<" ";
    cout<<endl;
}

int main(){
    fast;

    test(t)
        solve();

re;
}