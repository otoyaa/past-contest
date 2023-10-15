#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    int n;read(n);
    int ans=1;
    vi v(n);
    for(int i=0;i<n;i++)read(v[i]);
    vi v_2={0};
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i])v_2.pb(i);
    }
    v_2.pb(n);
    for(int i=1;i<v_2.size();i++){
        ans=max(ans,v_2[i]-v_2[i-1]);
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
